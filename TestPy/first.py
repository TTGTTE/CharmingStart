
# Делаем массив случайных чисел от 1 до 10
# Нечётные числа умножаем на 2
# Чётные числа делим на 2
# Числа меньшие n вывести на экран

# Вау, Python

# Модули
import random, math

# Переменные
a = {}
i = 0

# Ввод размера массива
d = int(input("Введите размер массива: ")) 

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
    a[i] = round(a[i])
    print(a[i])
    i += 1
i = 0

# Ввод числа n
n = int(input("Введите число n: "))

# Числа меньше n
print("Числа меньше n:")
while i < d:
    if a[i] < n:
        print(a[i])
    i += 1
i = 0