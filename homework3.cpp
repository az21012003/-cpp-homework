#include <iostream>
#include <clocale>
using namespace std;

int main() 
{   
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "введите числа" << "\n";
    cin >> a >> b;
    cout << "Остаток от деления " << a << " на " << b << " = " << a % b << "\n";
}
