# Project : 그룹 단어 체커
# Author : Seung-Pyo Hong
# Date of last update : May 8, 2024

N = int(input())

num = 0
for i in range(N):
    groupWord = input()
    WordList = []
    WordList.append(groupWord[0])

    for j in range(len(groupWord)-1):
        if (groupWord[j] == groupWord[j + 1]):
            continue
        elif (groupWord[j] != groupWord[j + 1]):
            WordList.append(groupWord[j+1])

    if(len(set(WordList)) == len(WordList)): # set(WordList) : 중복된 요소를 제거합니다.
        num += 1

print(num)