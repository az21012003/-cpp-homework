#include <iostream>
# include <string>
using namespace std;
#include <clocale>
class Student{
	private:
		string name;
		int age;
		double score;
		
	public:
	 Student(){
	     name = "неизвестно";
	     age = 0;
	     score = 0;
	}
	Student(string Name, int Age, double Score)
	     : name(Name), age(Age), score(Score) {
		 cout << "Данные для " << name << " введены " << endl;
		 }
     
	 void setName (string Name){name = Name;}
     void setAge (int Age){age = Age;}
     void setScore (double Score){score = Score;}
     string getName () {cout << "Имя: " << name << endl;}
     int getAge (){cout <<"Возраст: "<< age << endl;}
     double getScore (){cout << "Средний балл: " << score << endl;}
	 
	 bool IsAdult(){
	 	return(age >= 18);
	 }
	 
	 void show(){
	 	cout << "Имя: " << name << endl <<"Возраст: "<< age << endl <<"Средний балл: " << score << endl << "Совершеннолетний: ";
		if (age > 17)
		   cout << "да" << endl;
		else 
		   cout << "нет" << endl;
	 }
	 
	 void UpdateScore(double delta){score += delta;}
};
int main() {
    setlocale(LC_ALL, "Russian");
    Student Ivan("Иван", 19, 4.8);
    Ivan.UpdateScore(-0.7);
    Ivan.show();
}
