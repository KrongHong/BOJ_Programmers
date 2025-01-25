# x, y 좌표를 입력 받아서 다른 list에 저장
x_array = []
y_array = [] 

for i in range(3) :
    x, y = map(int,input().split())
    x_array.append(x)
    y_array.append(y)

for x in x_array : # x_array에서 1번 등장한 숫자가 있으면 그 숫자를 x_coor에 대입하고 break
    if x_array.count(x) == 1:
        x_coor = x # 4번쨰 x좌표 대입
        break

for y in y_array : # y_array에서 1번 등장한 숫자가 있으면 그 숫자를 ycoor에 대입하고 break
    if y_array.count(y) == 1:
        y_coor = y # 4번쨰 y좌표 대입
        break

print(f"{x_coor} {y_coor}")