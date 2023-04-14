""" actions = []
for i in range(1, 21):
    if i < 10 :
        input = 'WORD150' + str(i)
    else :
        input = 'WORD15' + str(i)
    actions.append(input)

print(actions) """

videos = []

for j in range (1, 21) :
        if j < 10 :
            path = 'D:/JiSongYoung/JiSongYoung/kt/D/NIA_SL_WORD150' + str(j) + '_REAL01_D'
        elif 10 <= j <= 20 :
            path = 'D:/JiSongYoung/JiSongYoung/kt/D/NIA_SL_WORD15' + str(j) + '_REAL01_D'
        videos.append(path)

print(videos)


