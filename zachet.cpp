#include <iostream>
# include <string>
using namespace std;
#include <clocale>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int n, x;
    cout << "Введите длину массива "<< endl;
    cin >> n;
    int arr[n];
    cout << "Введите элементы массива через пробел: " << endl;
    for (int i = 0; i < n; i++)
    	cin >> arr[i];
    cout << "Введите искомое число " << endl;
    cin >> x;
    int diff = abs(arr[0] - x);                        // Задание модуля разности
    int index = 0;                                     
    for (int i = 0; i < n; i++){
    	if (abs(arr[i] - x) < diff){
    		diff = abs(arr[i] - x);                    // Задание нового модуля разности
    		index = i;
		}
	}
    cout << "Индекс ближайшего элемента: " << index;
}
