n = int(input())

num = []
i = 2
new_num = 0

while True :
    if(n % i == 0) : # n이 i부터 나누어지면
        n = n / i # n 업데이트
        num.append(i) # 리스트에 i 추가 -> 자연스럽게 오름차순으로 정렬 된다.
    else :
        i += 1
    if(n == 1) :
        break

for i in range(len(num)) :
    print(num[i])