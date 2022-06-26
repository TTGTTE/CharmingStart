
-- Делаем массив случайных чисел от 1 до 10
-- Нечётные числа умножаем на 2
-- Чётные числа делим на 2



-- Переменные
local a = {}
local d = 5

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
    print(a[i])
end

-- Сортировка