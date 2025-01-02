# 파일명: "11005.py"
# 프로그램의 목적 및 기본 기능:
# B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
# 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
# A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
# 프로그램 작성자: 홍승표 (2025년 1월 02일),
#
# ===============================================================
# 프로그램 수정/보완 이력
# ===============================================================
#
# 프로그램 수정/보완작업자    일자          수정/보완 내용
# SP Hong                 25.01.02


dic = {
  0: '0', 1: '1', 2: '2', 3: '3', 4: '4', 5: '5', 6: '6', 7: '7', 8: '8', 9: '9',
  10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F', 16: 'G', 17: 'H',
  18: 'I', 19: 'J', 20: 'K', 21: 'L', 22: 'M', 23: 'N', 24: 'O', 25: 'P',
  26: 'Q', 27: 'R', 28: 'S', 29: 'T', 30: 'U', 31: 'V', 32: 'W', 33: 'X',
  34: 'Y', 35: 'Z'
}


data = input().split()
share = int(data[0])
formation = int(data[1])

result = []

while share > 0 :
    remainder = share % formation # 현재 자릿값 구하기
    result.append(dic[remainder]) # 현재 자릿값을 결과 리스트에 추가
    share //= formation # 다음 자릿값 계산을 위해 몫을 업데이트

print(''.join(reversed(result)))



