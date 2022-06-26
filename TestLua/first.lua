
-- Делаем массив случайных чисел от 1 до 10
-- Нечётные числа умножаем на 2
-- Чётные числа делим на 2
-- Числа меньшие n вывести на экран

-- Вау, Lua

-- Переменные
local a = {}

-- Ввод размера массива
print("Enter array size:")
local d = io.read()

-- Изначальный массив
print("Our array:")
for i = 1, d do
    a[i] = math.random(1,10)
    print(a[i])
end

-- Изменённый массив
print("Changed array:")
for i = 1, d do
    if math.fmod(a[i], 2) == 0 then
        a[i] = a[i] / 2
    else
        a[i] = a[i] * 2
    end
    a[i] = math.floor(a[i])
    print(a[i])
end

-- Ввод числа n
print("Enter n:")
local n = io.read()
n = tonumber(n)

-- Числа меньше n
print("Less than n:")
for i = 1, d do
    if a[i] < n then
    print(a[i])
    end
end