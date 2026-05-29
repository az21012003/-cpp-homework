#include <iostream>
using namespace std;
#include <clocale>
int main() {                               // Алгоритм всё ещё О(n^2), но я постарался его оптимизировать
	setlocale(LC_ALL, "Russian");
	int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;                             // Размер массива отдельной переменной для быстрого изменения входных данных
	int nums1[n];
	for (int i = 0; i < n; i++){           // Дополнительный массив разницы для простоты вычислений
		nums1[i] = nums[i] - target;
	}
	for (int i = 0; i < n - 1;  i++){
		for (int j = i + 1; j < n; j++){             // Второй for избегает повторения пройденных действий
			if ((nums[i] + nums1[j]) == 0){
			   cout << "Номера элементов" << i << j;
			   i = n - i;                            // Мгновенное завершение цикла
			   j = n;
			   }
		}
	}
	
}
