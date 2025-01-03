num = int(input())
point = [2]

for i in range(1 ,num+1) :
    update_point = point[i-1] + 2**(i-1)
    point.append(update_point)

area = point[num] ** 2
print(area)