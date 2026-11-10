a = list(map(int, input().split()))
for x in a:
    if x < 0:
        print("Найдено отрицательное число", x)
        break
else:
    print("Отрицательных чисел нет")