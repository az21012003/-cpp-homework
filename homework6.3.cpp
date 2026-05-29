#include <iostream>
using namespace std;
#include <string>
#include <clocale>
int main() {
	setlocale(LC_ALL, "Russian");
	string s;
	cout << "¬ведите строку" << endl;
	cin >> s;
	cout << "ƒлина строки: " << s.length();	    
}
