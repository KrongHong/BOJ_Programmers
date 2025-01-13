num = int(input())
count = 0

decimal = list(map(int, input().split()))

for i in range(len(decimal)) :
    if(decimal[i] == 1) :
        continue
    is_prime = True
    for j in range(2, decimal[i]) :
        if(decimal[i] % j == 0) :
            is_prime = False
            break

    if is_prime :
        count += 1
        
print(count)