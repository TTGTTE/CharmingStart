#include <iostream>
#include <windows.h>
#include <clocale>

using namespace std;

int main()
{
    int a;

    setlocale(LC_ALL, "Russian");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введите a: ";
    cin >> a;
    cout << a;
}