#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
    // Путь открытия файла имеет вид
    // FILE *fopen(path, mode)
    // Моды:
    // r - для открытия и чтения 
    // w - для открытия и записи
    // a - для открытия в конце файла и записи
    // t - текстовый файл
    // b - бинарный
    // + разрешить и чтение, и запись

    // Можно проверять файл на открытие

    // Девятнадцатое задание и двадцатое задание

    // Функция чтения файла
    //  size_t fread(
    //  char *buffer, // Массив для чтения данных
    //  size_t elemSize, // Размер одного элемента
    //  size_t numElems, // Число элементов для чтения
    //  FILE *f // Указатель на структуру FILE
    //                  );

    // size_t - это безнаковый целый тип в системных head файлах
    // size_t numElems - число элементов, которые надо прочитать
    // char *buffer - куда будем записывать
    // size_t elemSize - размер памяти

    // Например:
    // FILE *f;
    // double buff[100];
    // size_t res;
    // f = fopen("путь")
    // res = fread(buff, sizeof(double), 100, f)

    // Функция записи имеет такое же синтакс, что и чтение
    // Функция fwrite

    // По завершению работы с файлом, надо его закрыть
    // int fclose(FILE *f);

    // Для подсчёта символов и строк
    // Используем fread 

    // Функция fscanf предназначена для ввода данных с преобразование из текстового значение в бинарное
    // Имеет вид int fscanf(FILE *f, const char *format, ...);
    // Может иметь несколько переменных для вывода
    // Возвращает число успешно введённых элементов
    // 
        // Стандартная библиотека ввода-вывода Си содержит ряд других полезных функций ввода-вывода. Отметим некоторые из них.
        // Посимвольный ввод-вывод
        //     int fgetc(FILE *f); // ввести символ из потока f
        //     int fputc(int c, FILE *f); // вывести символ в поток f

        // Построковый ввод-вывод
        //     char *fgets(char *line,int size, FILE *f); // ввести строку из потока f
        //     char *fputs(char *line, FILE *f); // вывести строку в поток f

        // Позиционирование в файле
        //     int fseek(FILE *f, long offset, int whence); // установить текущую позицию в файле f
        //     long ftell(FILE *f); // получить текущую позицию в файле f
        //     int feof(FILE *f); // проверить, достигнут ли конец файла f

        // Функция fgetc возвращает код введенного символа или константу EOF (определенную как минус единицу) 
        // в случае конца файла или ошибки чтения. Функция fputc записывает один символ в файл. 
        // При ошибке fputc возвращает константу EOF (т.е. отрицательное значение), 
        // в случае удачи - код выведенного символа c (неотрицательное значение).

        // fgets с прототипом char *fgets(char *line, int size, FILE *f);
        // Функция выделяет из файла или входного потока f очередную строку и записывает ее в массив символов line.
        // size - это размер массива для записи
        // int fseek(FILE *f, long offset, int whence);
        // где offset - это позиция смещения
        // whence - это откуда начинается смещение
        // SEEK_CUR, SEEK_SET, SEEK_END
        // fseek(f, 12*sizeof(float), SEEK_CUR);

        // Узнать текущую позицию относительно начала файла можно с помощью функции ftell с прототипом
        // long ftell(FILE *f);
        // Функция ftell возвращает текущую позицию (неотрицательное значение) в случае успеха
        // отрицательное значение -1 при неудаче (например, если файл не разрешает прямое позиционирование).
        // Наконец, узнать, находится ли текущая позиция в конце файла, можно с помощью функции feof с прототипом
        // int feof(FILE *f);

    // Двадцать третье задание
    // Список - это структура данных, каждый элемент которого связан со следующим при помощи указателя
    // На первый элемент есть отдельный указатель

    // Элемент списка содержит поле данных и поле ссылки на следующий элемент
    // Поле ссылки последнего элемента содержит нулевой указатель

    // Чтобы добавить новый элемент в список, надо:
    // Получить память для него
    // Поместить туда информацию
    // Добавить элемент в конец списка (или в начало)

    // Создание первого элемента
    // typedef struct nd
    //    { int val;
    //    struct nd * next; } ND;
    // ND *beg=NULL, *end=NULL, *p;
    // p=(ND *) malloc(sizeof(ND)); // Выделение памяти для первого звена списка
    // p–>val=3;
    // beg=p;
    // p–>next=end; // следующий элемент приравниваем к end, т.е. к NULL

    // Создание последующих
    // p–>next=(ND *)malloc(sizeof(ND)); // Выделение памяти для второго звена списка
    // p=p–>next; // сделать текущим следующий, под который уже выделена память
    // p–>val=5;
    // p–>next=end;

    // Можно делать через цикл

    // Добавление элемента в список

    // p=(ND *)malloc(sizeof(ND)); // Выделение памяти для нового звена списка
    // p->val=33;
    // p->next=beg; // следующим за новым звеном делаем начальное звено
    // beg=p; // начальным звеном (головой) делаем новое звено

    // Удаление
    // В начале
    // p = beg; //запомним адрес первого элемента списка
    // beg = beg–>next; // теперь beg указывает на второй элемент списка
    // free(p); // освободим память, занятую переменной p

    // В середине
    // int x=5; // значение, которое будем искать
    // p = beg;
    // ND *temp;
    // while (p!=end && p->val !=x) // пока не конец списка и пока поле val не равно х
    // { 
    // temp=p; // запоминаем текущий
    // p = p->next; // запоминаем следующий за текущим
    // }
    // temp->next= p->next; //
    // free(p);

    // Из конца
    // p=beg; temp=beg; // оба указателя перемещаем на начало списка
    // while (p->next!=end) // пока следующим за текущим не будет end, т.е. NULL
    // { temp=p; // temp указывает на p
    // p= p->next; // p указывает на следующий за p
    // }
    // temp->next= end; // следующий за temp - end, т.е. NULL
    // free(p); // освобождаем память, которую занимал p

    // После окончания работы со списком в конце программы необходимо освободить память, которую он занимал.
    // Уничтожение списка
    // p=beg; //переходим в начало списка
    // while (beg!=NULL) // пока не конец списка
    // { beg=p->next; // начало списка смещаем на следующий элемент
    // free(p); // освобождаем занимаемую память
    // p=beg; // текущим элементом делаем новое начало
}