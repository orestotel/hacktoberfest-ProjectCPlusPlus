#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class shape{
  //figure - число
protected:
  int a;
public:
shape(){
  a = 0;
}
virtual double area()=0;
};
class triangle:public shape{
protected:
  int b;
  int c;
public:
triangle():shape(){
  b=0;
  c=0;
}
double area(){
  double p=(a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c))
}
};
class rectangle:public shape{
private:
  int b;
public:
  rectangle():shape(){
    b = 0;
  }
  double area(){
    return a*b;
  }
};
class square:public rectangle{
private:
public:
  square(){
    a = b = 0;
  }
  double area(){
    return pow(a,2);
  }
  
};

int main(){

}
