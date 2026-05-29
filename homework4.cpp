#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
    char symbol, symbolNext;   
    int b, c;
    cout << "введите символ" << "\n";
    cin >> symbol;
    b = symbol;
    c = b + 1;
    symbolNext = c;
    cout << "Символ: " << symbol << "\n";
    cout << "Номер: " << b << "\n";
    cout << "Номер следующего символа: " << c << "\n";
    cout << "Следующий символ: " << symbolNext << "\n";
}
