#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//створити клас студент(ім'я, факультет, середня успішність)
//дано масив студентів.
//зовнішні функції:
//1. посортувати студентів за прізвищем
//2. Вивести студентів заданого факультету
//3. Знайти студента з максимальною успішністю.
class student{
private:
  string name;
  string surname;
  string faculty;
  double mark_estimate = 0;
public:

  void input(){
    cout<<"Input function called;"<<endl
    cout<<" -input name:"; cin>>student.name; cout<<endl;
    cout<<" -input surname:"; cin>>student.surname; cout<<endl;
    cout<<" -input faculty:"; cin>>student.faculty; cout<<endl;
    cout<<" -input mark estimate:"; cin>>student.mark_estimate; cout<<endl;

  }
  void input(string a, string b, string c, double d){
    cout<<"Direct input function called;"<<endl
    student.name = a; student.surname = b; student.faculty = c;
    student.mark_estimate = d;
    cout<<" -name:"; cout<<student.name; cout<<endl;
    cout<<" -surname:"; cout<<student.surname; cout<<endl;
    cout<<" -faculty:"; cout<<student.faculty; cout<<endl;
    cout<<" -faculty:"; cout<<student.faculty; cout<<endl;
    cout<<" -mark estimate:"; cout<<student.faculty; cout<<endl;
  }
  ~student(){cout<<"a student "<<student.name<<" ";
cout<<student.surname<<" of the "<<student.faculty;
cout<<" faculty - deleted;"<<endl;}
};

int main(){
cout<<"This program is about students"<<endl;
}
