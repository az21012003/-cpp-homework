#include <iostream>
# include <string>
using namespace std;
#include <clocale>
#include <cmath>

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 4;                                             // Отдельная переменная длины массива для быстрой смены данных
    string scroll[n] = {"adsd", "flick", "qew", "qeqwds"};
	bool arr[n]; 
	int flip = 1;
    for (int i = 0; i < n; i++){
    	if (scroll[i] == "flick")
    	    flip += 1;
    	arr[i] = 0.5 * (1 - pow(-1, flip));
 // 	cout << arr[i] << " ";                    // у меня булевы числа выходят как числа, так что для true/false использована функция снизу
	if (arr[i] == 1)
	   cout << "true ";
	else 
	   cout << "false ";  
    }
    
}
