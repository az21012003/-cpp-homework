#include <iostream>
using namespace std;
#include <string>
#include <clocale>
int SummToN(int N){
	if (N == 1)
	  return (1);
	return N + SummToN(N-1);
} 
int main() {
	setlocale(LC_ALL, "Russian");	
    int N = 5;
	cout << SummToN(N);
}
