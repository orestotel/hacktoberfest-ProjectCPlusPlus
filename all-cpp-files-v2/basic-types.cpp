#include <iostream>
#include <string>
using namespace std
class Figure{
protected:
  string color;
public:
  Figure():color(""){}
  Figure(string c):color(c){}
  void input(istream&in){in>>color;}
  void output(ostream&out){out<<color<<"";}
  string getColor()const{return color;}
  void setColor(string c){color = c;}
  double square(){}
  double perym(){}

};
//похідний клас
class Circle:public Figure{
private:
  double r,x,y;
public:
  Circle():Figure(),r(0),x(0),y(0){}
  Circle(string c, double r1, double x1, double y1){
    Figure(c),r(r1),x(x1),y(y1);
  }
  void input(istream&in){
    Figure::input(in);
    in>>x>>y;
  }
  void output(ostream&out){
    out<<color<<""<<r<<endl;
  }
  double square(){return 3.14*r*r;}
  double perym(){return 2*3.14*r;}
  double getR()const{return r;}
  double getX()const{return x;}
  double getY()const{return y;}
}
class Triangle:public Figure{
private:
  double a,b,c;
public:
  Triangle():Figure(), a(0),b(0),c(0){}
  Triangle(string col, double a1, double b1, double c1){
    Figure(col),a(a1),b(b1),c(c1){}
  }
  void input(istream&in){
    Figure::input(in);
  in>>a>>b>>c
}
void output(ostream&out){
  Figure::output(out);
  out<<a<<" "<<b<<" "<<c<<endl;
}
double square(){
  double p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}
double perym(){
  return a+b+c;
}
}
//дано масив вказівників на об'єкти
//посортувати цей масив за зростанням площі фігур
//знайти фігуру з максимальним периметром
//
//
