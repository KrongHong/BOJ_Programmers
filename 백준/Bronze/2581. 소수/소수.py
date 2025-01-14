m = int(input()) # 범위를 입력
n = int(input())

prime = []

for i in range(m, n+1) :
    if(i == 1) : # 1의 경우는 소수에서 제외
        continue
    is_prime = True
    for j in range(2, i) : # 범위의 값중 i가 2~(i-1)에서 하나라도 나눠지면 그건 소수에서 제외
        if(i % j == 0) :
            is_prime = False
            break

    if is_prime : # 소수를 prime list에 추가
        prime.append(i)
    
if not prime : # prime이 비었다면 
    print("-1")
else :
    print(sum(prime))
    print(min(prime))
