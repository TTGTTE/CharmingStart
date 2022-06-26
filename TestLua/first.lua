
-- Делаем массив случайных чисел от 1 до 10
-- Нечётные числа умножаем на 2
-- Чётные числа делим на 2
-- Числа меньшие n вывести на экран



-- Переменные
local a = {}
local d = 5
local n = 5

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
    math.abs(a[i])
    print(a[i])
end

-- Сортировка
print("Less than 5:")
for i = 1, d do
    if a[i] < 5 then
    print(a[i])
    end
end