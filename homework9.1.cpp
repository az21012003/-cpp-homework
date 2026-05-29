#include <iostream>
using namespace std;
#include <string>
#include <clocale>
int SummOfThree(int a, int b, int c){
		return(a + b + c);
}
int main() 
{
	setlocale(LC_ALL, "Russian");	
    cout << "Введите числа через пробел" << "\n";
    int a, b, c;
    cin >> a >> b >> c;
    int result = SummOfThree(a, b, c);  
    cout << "Ответ: " << result;
}
