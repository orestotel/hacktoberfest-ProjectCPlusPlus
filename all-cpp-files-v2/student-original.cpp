#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
class student{
private:
  string name, faculty;
  int *marks, n;
public:
  student():name(""),faculty(""),marks(NULL),n(0){}
  student(const student&a);
  void input(istream&a);
  void output(ostream&out);
  double average();
  student& operator = (const student &a){
    if(this!=&a){
      delete[]marks;
      name = a.name;
      faculty = a.faculty;
      n = a.n;
      marks = new int [n];
      for(int i = 0; i<n; i++){
        marks[i] = a.marks[i];
      }
      return *this;
    }
  }
  string getFaculty()const{return faculty;}
  ~student(){delete[]marks;}

};
//конструктор копіюванння
student::student(const student &a){
  if(this!=&a){
    name = a.name; faculty = a.faculty;
    n= a.n;
    marks = new int [n];
    for(int i = 0; i<n; i++){
      marks[i] = a.marks[i];
    }
  }
}
void student::input(istream&in){
  in>>name>>faculty>>n;
  marks = new int [n];
  for(int i = 0; i<n; i++){
    in>>marks[i];
  }
}
void student::output(ostream&out){
  out<<name<<" "<<faculty<<average()<<endl;
}
double student::average(){double s = 0;
for(int i=0; i<n; i++){
  s+=marks[i];
}
return s/n;
}
void sort(student *a, int n){
  student temp;
  for(int i = 0; i<n-1; i++){
    for(int j = 0; j<n-1-i;j++){
      if(a[j].average()<a[j+1].average()){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}
string maxusp(student*a,int n){
  string faculty, ftemp;
  double s, max = 0;
  int k;
  for(int i=0; i<n; i++){
    ftemp = a[i].getFaculty();
    s = a[i].average();
    k = 1;
    for(int j = i+1; j<n;j++){
      if(a[i].getFaculty()==ftemp){
        s = a[j].average();k++;
      }
    }
    if(s/k>max){
      max = s/k;
      faculty = ftemp;
    }
  }
  return faculty;
}
int main(){
  int n;
  ifstream in("student.txt");
  in>>n;
  student *a = new student [n];
  for(int i = 0; i<n; i++){
    a[i].input(in);
  }
  sort(a,n);
  ofstream out("sorted.txt");
  for(int i=0; i<n; i++){
    a[i].output(out);
  }
  cout<<maxusp(a,n)<<endl;
  delete[]a;
  in.close();
  out.close();
  return 0;

}
// Конструктори використовуються:
//1) Оголошення та ініціалізація об'єкту
//2) Передавати в другу функцію елемента по значенню
//3) Повертаємо об'єкт з функції по значеннню.
