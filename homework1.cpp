#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите имя " << endl;
	string s;
	cin >> s;
	cout << "Здравствуйте " << s << endl;

}
