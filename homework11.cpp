#include <iostream>
# include <string>
using namespace std;
#include <clocale>
int main() {
	setlocale(LC_ALL, "Russian");
    cout << "Введите число: ";
    string s;
    cin >> s;
    s.append(" ");                           // Защита от ошибки обращения к несуществуещему элементу
    int result = 0;
    for (int i = 0; i < s.length() - 1; i++){
        if (s[i] == 'M')
           result += 1000;
	    else if (s[i] == 'D')
           result += 500;
	    else if ((s[i] == 'C') && (s[i+1] == 'M' || s[i+1] == 'D'))
           result += -100;
        else if (s[i] == 'C')
           result += 100;
	    else if (s[i] == 'L')
           result += 50;
	    else if ((s[i] == 'X') && (s[i+1] == 'L' || s[i+1] == 'C'))
           result += -10;
        else if (s[i] == 'X')
           result += 10;
        else if (s[i] == 'V')
           result += 5;
	    else if ((s[i] == 'I') && (s[i+1] == 'V' || s[i+1] == 'X'))
           result += -1;
        else if (s[i] == 'I')
           result += 1;   	   	
	}
	cout << "Число: " << result;
}
