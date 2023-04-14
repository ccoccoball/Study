import tkinter
import tkinter as tk
from tkinter import*
from tkinter.colorchooser import*
from tkinter.simpledialog import*
import tkinter.messagebox
import time

## 그림판 프로그램 ##

def createdrawing():

    def mouseClick(event) :
        global x1, y1, x2, y2
        x1 = event.x
        y1 = event.y

    def mouseDrop(event):
        global x1, y1, x2, y2, penColor
        x2 = event.x
        y2 = event.y
        canvas.create_line(x1, y1, x2, y2, fill = penColor)

    def getColor() :
        global penColor
        color = askcolor()
        penColor = color[1]


    window = None
    canvas = None
    x1, y1, x2, y2 = None, None, None, None
    penColor = 'black'

    if __name__ == "__main__":
        window = Tk()
        window.title("추억의 그림판 놀이")
        canvas = Canvas(window, height = 300, width = 300)
        canvas.bind("<Button-1>", mouseClick)
        canvas.bind("<ButtonRelease-1>", mouseDrop)
        canvas.pack()

        mainMenu = Menu(window)
        window.config(menu = mainMenu)
        fileMenu = Menu(mainMenu)
        mainMenu.add_cascade(label="설정", menu = fileMenu)
        fileMenu.add_command(label="선 색상 선택", command = getColor)
        fileMenu.add_separator()

        window.mainloop() 

## 방명록 프로그램 ##

def creatingmemo() :

    name_list = []
    want_list = []
    memo_list = []

    def print_title() :
        print("")
        print("=" * 28)
        print("=" * 10, "방명록", "=" * 10)
        print("=" * 28)
        print("")

    def print_menu() :
        print("     1. 방명록 추가")
        print("     2. 방명록 수정")
        print("     3. 방명록 출력")
        print("     4. 방명록 삭제")
        print("     5. 종료")
        print("")
        menu = input("원하는 번호를 선택하세요: ")
        return int(menu)

    def add_memo():
        name_list.append(input("닉네임: "))
        want_list.append(input("수식어: "))
        memo_list.append(input("memo: "))

    def update_memo(name, memo) :
        for i in range(0, len(name_list)) :
            if name_list[i] == name :
                memo_list[i] = memo
                return True
        return False

    def print_memo() :
        for i in range(0, len(name_list)) :
            print("")
            print("★☆", memo_list[i], "(",want_list[i], name_list[i],")")

    def delete_memo(name) :
        for i in range(0, len(name_list)) :
            if name_list[i] == name :
                del(name_list[i])
                del(memo_list[i])
                del(want_list[i])
                return True
        return False

    def print_end() :
        print("=" * 28)

    while True :
        print_title()
        menu = print_menu()
        if menu == 1 :
            add_memo()

        elif menu == 2 :
            name = input("수정하고 싶은 닉네임을 입력하세요 : ")
            memo = input("수정하고 싶은 방명록을 입력하세요 : ")
            if update_memo(name, memo) == True :
                print(name, "의 방명록을 수정하였습니다.")
            else :
                print(name, "는(은) 존재하지 않습니다.")

        elif menu == 3 :
            print_memo()

        elif menu == 4 :
            print_memo()
            name = input("삭제하고 싶은 닉네임을 입력하세요 : ")
            if delete_telnum(name) == True :
                print(name, "를(을) 삭제하였습니다.")
            else :
                print(name, "는(은) 존재하지 않습니다.")

        elif menu == 5 :
            print_end()
            break
        
    
## 이름궁합 프로그램 ##

def creatingname() :

    def print_title():
        print("")
        print("*" * 43)
        print("*" * 3, "너와 나의.. 궁합은 얼마나 될ㄲr...?", "*" * 3)
        print("*" * 43)

    def print_menu() :
        print("     1. 이름점 보기")
        print("     2. 종료")
        menu = input("원하는 번호를 선택하세요: ")
        return int(menu)

    def do_test():
        print("")
        print("원하는 이름의 글자수를 각각 입력하세요")
        N, M = map(int, input().split())
        print("")
        print("원하는 이름을 알파벳 대문자로 각각 입력하세요")
        A, B = input().split()
        alp = [3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1]
        AB = ""
        end = min(N, M)


        for i in range(end) :
            AB += A[i] + B[i]
        AB += A[end:] + B[end:]

        lst = [alp[ord(i) - ord('A')] for i in AB]

        for i in range(N + M -2) :
            for j in range(N + M - 1 - i):
                lst[j] += lst[j+1]

        print()
        print("* * * 잠시만 기다려 주세요 궁합을 계산하는 중입니다 * * *")
        time.sleep(3)
        print()
        print("단순한 테스트일 뿐 이게 전부는 아니라는 점 명심하세요")
        time.sleep(2)
        print()
        print("축하합니다", A, "님과", B, "님의 궁합은 아래와 같습니다!")
        print("{}".format(lst[0] % 10 * 10 + lst[1] % 10))

    def print_end() :
        print("")
        time.sleep(1)
        print("*")
        time.sleep(1)
        print("")
        print("*")
        print("")
        time.sleep(1)
        print("원하시는 결과를 얻었길 바라며.....☆")
        time.sleep(1)
        print("")
        print("*")
        time.sleep(1)
        print("")
        print("*")
        print("")

    while True:
        print_title()
        menu = print_menu()
        if menu == 1 :
            do_test()

        elif menu == 2 :
            print_end()
            break

    
window = tkinter.Tk() #생성 구문#

window.title("*  *  >>>>>>>>>>>>>>>>♡90'S LovE♡<<<<<<<<<<<<<<<<<  *  *") #윈도우 창 제목
window.geometry("640x400+100+100") #윈도우 창 크기(너비x높이+x좌표+y좌표)
window.resizable(False, False) #창 크기 조절 가능여부


title = tkinter.Label(window, text = "\n다 90'S LoveE - ! !\n", fg = "red", font = "휴먼아미체", cursor = "star")
title.pack()

## 그림판 가는 버튼 생성하기 ##
mcdb = tk.Button(window, text = "그림판 고고씽?",width = 64, height = 7, cursor = 'heart', command = createdrawing,)
mcdb.pack()

## 방명록으로 가는 버튼 생성하기 ##
msb = tk.Button(window, text = "방명록을 입력하세용!",width = 64, height = 7, cursor = 'hand1', command = creatingmemo)
msb.pack()

## 이름 궁합으로 가는 버튼 생성하기 ##
mnb = tk.Button(window, text = "너와 나의 이름궁합은?!",width = 64, height = 7, cursor = 'spraycan', command = creatingname)
mnb.pack()

window.mainloop() #반복 구문
