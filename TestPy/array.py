
# Делаем массив случайных чисел от 1 до 10
# Нечётные числа умножаем на 2
# Чётные числа делим на 2
# Числа меньшие n вывести на экран

# Вау, Python

# Модули
import random

# Ввод размера
d = int(input("Размер массива: "))

# Массив с заполнением
a = [random.randint(1, 10) for i in range(d)]
b = []
c = []

print("Изначальный массив:")
print(*a)
for i in range(len(a)):
    if a[i] % 2 == 0:
        a[i] /= 2
        b.append(a[i])
    else:
        a[i] *= 2
        b.append(a[i])
    b[i] = round(b[i])

print("Изменённый массив:")
print(*b)
n = int(input("Введите число n: "))
for i in range(len(b)):
    if b[i] < n:
        c.append(b[i])

print("Числа меньше n:")
print(*c)