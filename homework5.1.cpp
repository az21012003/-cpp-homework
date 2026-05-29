#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    double pi = 3.14, r, S;  
    cout << "Введите радиус" << "\n";
    cin >> r;
    S = pi * r * r;
    cout << "Площадь круга " << S << "\n";
}
