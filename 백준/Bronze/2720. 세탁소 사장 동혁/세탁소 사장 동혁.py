num = int(input())
coins = [25, 10 ,5, 1]
results = []

for _ in range(num) :
    money = int(input())
    change_count ={coin : 0 for coin in coins} # 각 동전별 사용 개수를 저장할 딕셔너리

    for coin in coins :
        if money == 0 :
            break
        count = money // coin # // 정수형 몫 반환
        change_count[coin] = count
        money -= coin * count # 거스름돈 업데이트
    results.append(change_count)

for i in range(num) :
    for value in results[i].values():
        print(value, end=' ')
    print()