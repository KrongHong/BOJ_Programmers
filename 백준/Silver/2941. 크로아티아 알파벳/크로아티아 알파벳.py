# Project : 크로아티아 알파벳을 이용해 알파벳 수 계산
# Author : Seung-Pyo Hong
# Date of last update : May 8, 2024

Croatia_str = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

croAlpa = input()

for i in Croatia_str:
    croAlpa = croAlpa.replace(i, "*")

print(len(croAlpa))