#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int n;
    cout << "Введите размер: ";
    cin >> n;

    srand(time(0));

    int a[n];

    cout << "Изначальный массив:" << endl;

    for(int i = 0; i < n; i++)
    {
        a[i] = (rand() % 15) - 10;
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