while True : 
    num = int(input())
    if(num == -1) :
        break
    array = []
    for i in range(1, num + 1) : 
        if(num % i == 0 and i != num) :
            array.append(i)
    if(sum(array) == num) :
        print(f"{num} = {' + '.join(map(str, array))}")
    else :
        print(f"{num} is NOT perfect.")
