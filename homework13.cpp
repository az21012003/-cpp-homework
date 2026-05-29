#include <iostream>
# include <string>
using namespace std;
#include <clocale>

int main() {
    setlocale(LC_ALL, "Russian");
    string s;
	cout << "Введите строку " << endl;
    cin >> s;
    int a;
    for (int i = 0; i < 2 * s.length(); i++){   // Чтобы наверняка успеть удалить всё
	   a = s.find("()");
	   if (a != -1)
	      s.erase(a, 2); // В лекциях на гитхабе этой функции не было, пришлось искать в перечне функций
	   a = s.find("{}");
	   if (a != -1)
	      s.erase(a, 2);
	   a = s.find("[]");
	   if (a != -1)
	      s.erase(a, 2);
		}
    if (s == "")
       cout << "Строка правильная";
    else
       cout << "Строка неправильная";
}
