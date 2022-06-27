#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

double random(double min, double max)
{
    return (double)(rand())/RAND_MAX*(max - min) + min;
}

int main()
{
    int n;
    float d,q;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите размер: ";
    cin >> n;

    cout << "Случайные числа" << endl;
    cout << "От: ";
    cin >> d;
    cout << "До: ";
    cin >> q;


    srand(time(0));

    float a[n];

    cout << "Изначальный массив:" << endl;

    for(int i = 0; i < n; i++)
    {
        a[i] = random(d,q);
        cout << "[" << i << "] = " << a[i] << endl;
    }

    cout << endl;

    cout << "Элементы массива с переходом знака:" << endl;

    for(int i = 0; i < n; i++)
    {
        if((a[i] < 0 && a[i-1] > 0) || (a[i] > 0 && a[i-1] < 0))
        {
            cout << "[" << i << "] = " << a[i] << endl;
        }
    }
}