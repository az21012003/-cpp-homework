#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int N, S = 0;
    cout << "введите количество чисел" << "\n";
    cin >> N;
    for (int i = 1; i <= N; i ++){
    	S += i;
	}
	cout << "Сумма первых " << N << " чисел: " << S; 
}
