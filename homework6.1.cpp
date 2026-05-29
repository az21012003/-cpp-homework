#include <iostream>
using namespace std;
#include <time.h>
#include <clocale>
int main() {
	setlocale(LC_ALL, "Russian");
	int arr[5];
    int summ = 0;
	srand(time(NULL));                      // Задания сида рандомайзера от времени
    for (int i = 0; i < 5; i++)
        arr[i] = (1 + rand()) % 10;         // Получение чисел до десяти
    cout << "элементы массива: ";
    for (int x : arr) {
        cout << x << " ";
        summ += x;
    }
    cout << endl << "Сумма элементов: " << summ;
}
