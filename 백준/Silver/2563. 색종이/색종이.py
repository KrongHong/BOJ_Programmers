# 가로 x 세로 = 100 x 100인 빈 리스트 만들기
paper = []
for i in range(100) :
    paper.append([])
    for j in range(100) :
        paper[i].append([])

num = int(input())

for input_num in range(num) :
    coordinate = input().split()
    x, y = map(int, coordinate)
    for i in range(x, x+10) :
        for j in range(y, y+10) :
            paper[i][j] = [1] # 색종이 이차행렬에 모두 1을 넣기, 문제 : append를 사용할 경우 리스트에 더 많은 1이 계속 저장되어 넓이를 맞게 만들어내지 못한다.


result = 0 # 넓이 출력
for k in range(100) : 
    for z in range(100) :
        result += paper[k][z].count(1) # 1의 개수 = 넓이

print(result)
    