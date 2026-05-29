#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int year; 
    cout << "введите год" << "\n";
    cin >> year;
    if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))   // Проверка всех требований через логические вентили
    	cout << "Год високосный " << "\n";
	else
		cout << "Год невисокосный " << "\n";
}
