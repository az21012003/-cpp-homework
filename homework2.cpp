#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");   // Русский в консоли
    int a, b, c;                           // Обьявление переменных
    cout << "введите числа" << "\n";
    cin >> a >> b >> c;
    cout << "Среднее арифметическое: " << double(a + b + c) / 3 << "\n"; // Необходимо привести к double, иначе потеряется дробная часть
}
