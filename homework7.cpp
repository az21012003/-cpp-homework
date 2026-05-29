#include <iostream>
using namespace std;
#include <string>
#include <clocale>
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите число" << "\n";
	string s;                            // Решение ч/з строку
    cin >> s;
    bool prov; 
    int result = 0;
    int n = s.length();
    for (int i = 0; i < n; i++){
        prov = (s[i] != s[n - i - 1]);
        result += prov;
	}
	prov = result == 0;
	cout << prov;
}
