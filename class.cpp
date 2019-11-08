#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
  double x,y;
public:
  Point(){x=y=0;}
  Point(double x1, double y1=0){x = x1; y = y1;}
  Point(const Point &a){x = a.x; y=a.y;}
  void input(){cin>>x>>y;}
  void output(){cout<<"()"<<x<<','<<y<<")"<<endl;}
  //can declare as many operations with class as you want
  double distance( Point b){
    return sqrt(pow(x-b.x,2)+pow(y-b.y,2));
  }
  void move(double d1, double d2){
    x+=d1;
    y+=d2;
  }
  double getx(){return x;};
  double gety(){return y;};
  void setx(double x1){
    x = x1;
  }
  void sety(double y1){
    y = y1;
  };
  //create destructor.
  //distructor is always single and it has no parameters
  ~Point(){cout<<"destroy object"<<endl;}
};
void input(Point*p,int n){
  for(int i=0;i<n;i++){p[i].input();};
}
int main(){
  int n;
  cin>>n;
  Point p1, p2;
  Point *p= new Point[n];
  double max = 0, l;
  input(p,n);
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      l =p[i].distance(p[j]);
      if(l>max){
        max = l;
        p1 = p[i];
        p2 = p[j];
      }
    }
  }
  cout<<"max = "<<max<<endl;
  p1.output();
  p2.output();
  delete[]p;
  return 0;
}
//створити клас студент(ім'я, факультет, середня успішність)
//дано масив студентів.
//зовнішні функції:
//1. посортувати студентів за прізвищем
//2. Вивести студентів заданого факультету
//3. Знайти студента з максимальною успішністю.
