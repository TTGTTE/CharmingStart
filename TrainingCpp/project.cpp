#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "¬ведите a" << endl;
    cin >> a;
    cout << a;
}