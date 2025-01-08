num = int(input())
line = 1

while num > line :
    num -= line
    line += 1

if line % 2 == 0 :
    numerator = num
    denominator = line - num + 1
else :
    denominator = num
    numerator = line - num + 1

print("%d/%d" %(numerator, denominator))