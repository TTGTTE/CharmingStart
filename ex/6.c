#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
    // Семнадцатое задание:
    // Все программы в Си языке являются функциями
    // C bспользованиеv функций связаны понятия:
    // Её определение (действия, выполняемые ею)
    // Её объявление (форма обращения к ней)
    // Её вызов

    // Определение функции задаёт:
    // Тип возращаемого значения
    // Имя функции
    // Типы и число формальных параметров
    // Тело функции
    // Например:
    // int rus(char r) { тело функции; return 1 }

    // Определение функции может быть везде
    // Главное до вызова функции поместить её объявление

    // Объявление функции имеет вид определения функции без её тела
    // Объявление может быть вида rus(char);

    // Функция может вернуть значение при помощи оператора return
    // Выражение объявления в функции уже вычисляется в ней и возвращается в точку вызова функции в качестве результата
    
    // Функции, не возвращающие значения, должны быть определены как void
    
    // Порядок и типы возвращаемых параметров должны быть одинаковы при её вызове
    // Тип должен быть соответствующим 
    // Если тип не указан, то он int

    // Чтобы передать функции массив, нужно объявить массив указателем, а при вызове указать на первый элемент

    // Восемнадцатое задание:
    // Структуры в си это объединённые данные, у которых есть некая логическая взаимосвязь
    // Любая структура начинается со слов struct
    // struct <название> { данные };
    // Чтобы узнать размер структуры можно использовать sizeof()

    // Можно инициализировать структуры как массивы, записав
    // struct klass = a {1, "b", 10.5}
    // обращаться к структуре можно через операционную точку (при работе с переменной)
    // printf("%d", a.nomer);
    // а можно через операцию стрелку -> (при работе с указателем)
    // struct klass = *ptr = &a
    // printf("%.1f", (*ptr).score)

    // Структуру можно передать в функцию
    // Целиком void f(struct klass str)
    // Использовать указатель void f(struct klass *p)
    // Отдельные элементы void f(int i, float f)

    // Можно объявлять структуры без struct используя typedef
}