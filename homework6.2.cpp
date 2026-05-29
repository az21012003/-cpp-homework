#include <iostream>
using namespace std;
#include <time.h>
#include <clocale>
int main() {
	setlocale(LC_ALL, "Russian");
	int matrix[2][2];
	srand(time(NULL));
	cout << "элементы массива: " << "\n";
    for (int i = 0; i < 2; i++) {
         for (int j = 0; j < 2; j++) {
		     matrix[i][j] = (1 + rand()) % 10;
		     cout << matrix[i][j] << " ";
		 }
		 cout << endl;
    }
    cout << "главная диагональ: " << "\n";
    for (int i = 0; i < 2; i++) { 
        cout << matrix[i][i] << " ";
    }
}
