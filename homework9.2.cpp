#include <iostream>
using namespace std;
#include <string>
#include <clocale>
int doubleArray(int arr[], int size){
		for(int i = 0; i < size; i++){
			arr[i] = arr[i] * 2;
		}
}
int main() {
	setlocale(LC_ALL, "Russian");	
    int arr[5] = {1, 2, 3, 4, 5};
    cout << " Исходный массив: ";                
    for (int x: arr)
    	cout << x << " ";
    cout << endl << "Удвоенный массив: ";
	doubleArray(arr, 5);
    for (int x: arr)
    	cout << x << " ";
}
