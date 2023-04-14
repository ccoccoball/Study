import cv2 
import mediapipe as mp
import time
import os


cap = cv2.VideoCapture("D://kt//D//NIA_SL_WORD1501_REAL01_D.mp4")

mpHands = mp.solutions.hands
my_hands = mpHands.Hands()
mpDraw = mp.solutions.drawing_utils

while True:
        ret, frame = cap.read()
        results = my_hands.process(frame)

        if results.multi_hand_landmarks:
            for handLms in results.multi_hand_landmarks:
                for id, lm in enumerate(handLms.landmark):
                    h,w,c = frame.shape
                    cx, cy = int(lm.x*w), int(lm.y*h)
                    print(id, ":", cx, cy)
                    if id == 0:
                        cv2.circle(frame, (cx, cy), 20, (255, 0, 0), cv2.FILLED)

                mpDraw.draw_landmarks(frame, handLms, mpHands.HAND_CONNECTIONS)

        cv2.imshow("Test", frame)
        cv2.waitKey(1)