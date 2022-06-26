
# Делаем массив случайных чисел от 1 до 10
# Нечётные числа умножаем на 2
# Чётные числа делим на 2
# Числа меньшие n вывести на экран

# Вау, Python

import random, math

a = {}
d = 5
n = 5
i = 0

# Изначальный список
print("Начальный массив:")
while i < d:
    a[i] = random.randint(1, 10)
    print(a[i])
    i += 1
i = 0

# Изменённый список
print("Изменённый массив:")
while i < d:
    if math.fmod(a[i], 2) == 0:
        a[i] /= 2
    else:
        a[i] *= 2
    print(a[i])
    i += 1
i = 0

# Числа меньше n

print("меньше n:")
while i < d:
    if a[i] < n:
        print(a[i])
    i += 1
i = 0