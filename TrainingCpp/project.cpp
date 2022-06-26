#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите a: ";
    cin >> a;
    cout << a;

    return 0;
}