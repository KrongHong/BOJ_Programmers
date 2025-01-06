import math

a, b, v = map(int, input().split())

cur_h = math.ceil((v-b) / (a-b))
    
print(cur_h)