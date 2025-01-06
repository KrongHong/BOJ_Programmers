num = int(input())
numberBox = 1
cnt = 1

while num > numberBox :
    numberBox += 6 * cnt
    cnt += 1

print(cnt)