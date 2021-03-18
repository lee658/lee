import re

# testcase1 : 2A3A4!
# testcase2 : 6!2C2C
# testcase3 : 2!3!4!
# testcase3 : 23!4!

정규표현식 = r'([1-6])([!A-D]?)'
결과 = re.findall(정규표현식, '2A3A4!')

점수 = []
for i, j in 결과:
    if j == 'A':
        점수.append(int(i)*2)
    elif j == 'B':
        점수.append(int(i)*3)
    elif j == 'C':
        점수.append(int(i)*4)
    elif j == 'D':
        점수.append(int(i)*5)
    elif j == '!':
        점수.append(int(i))
        점수 = [sum(점수)**2]
    else:
        점수.append(int(i))

점수