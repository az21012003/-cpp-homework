#include <iostream>
# include <string>
using namespace std;
#include <clocale>


int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите координаты точки: ";
    double x, y, x0, y0;
    cin >> x >> y;
    x0 = 2; y0 = -1;
    double r = (x - x0) * (x - x0) + (y - y0) * (y - y0);
	if (r > 25)
	    cout << "Точка вне окружности";
	else if (r == 25)
	    cout << "Точка на окружности";
	else 
	    cout << "Точка внутри окружности";
}
