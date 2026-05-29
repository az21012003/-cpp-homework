#include <iostream>
using namespace std;
#include <string>
#include <clocale>
int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите строку " << "\n";
	string s;
    getline(cin, s);                           // Данная функция забирает строку вместе с пробелами, в отличие от cin
    int summ = 0;
    for (char x : s){
    	 for (char y : s){
    	 	summ += (x == y) && (x != ' ');		    	 	
         }
         summ += -1 + (x == ' ');
	}
	if (summ == 0)                            // У меня булева переменная выводится числом, данная функция выводит true/false
		cout << "true";
    else 
    	cout << "false";
}
