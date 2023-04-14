import cv2 
import mediapipe as mp
import time
import os

path = 'C:\\Users\\iytse\\OneDrive\\바탕 화면\\kt\\D\\'
file_list = os.listdir(path)
file_list_py = [file for file in file_list if file.endswith('.mp4')]

cap = cv2.VideoCapture('C:\Users\iytse\OneDrive\바탕 화면\kt\D')

mpHands = mp.solutions.hands
my_hands = mpHands.Hands()
mpDraw = mp.solutions.drawing_utils

while True:
     success, img = cap.read()
     imgRGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
     results = my_hands.process(imgRGB)

     if results.multi_hand_landmarks:
         for handLms in results.multi_hand_landmarks:
             for id, lm in enumerate(handLms.landmark):
                 h,w,c = img.shape
                 cx, cy = int(lm.x*w), int(lm.y*h)
                 print(id, ":", cx, cy)
                 if id == 0:
                     cv2.circle(img, (cx, cy), 20, (255, 0, 0), cv2.FILLED)

             mpDraw.draw_landmarks(img, handLms, mpHands.HAND_CONNECTIONS)

     cv2.imshow("Test", img)
     cv2.waitKey(1)