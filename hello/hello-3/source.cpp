#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
class shape{
  //figure - число
protected:
  int a;
public:
shape(){
  a = 0;
}
virtual void input(istream&in) = 0;
virtual double area() = 0;
virtual void output(ostream&out) = 0;
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
  void input(istream&in){
    in>>a>>b>>c;
  }
  void output(ostream&out){
    out<<"Triangle: "<<a<<' '<<b<<' '<<c<<"; area:"<<area()<<endl;
  }
  double area(){
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
  }
triangle operator=(triangle t){
  a = t.a;
  b = t.b;
  c = t.c;
}

};
class rectangle:public shape{
private:
  int b;
public:
  rectangle():shape(){
    b = 0;
  }
  void input(istream&in){
  in>>a>>b;
  }
  double area(){
    return a*b;
  }
  void output(ostream&out){
  out<<"Rectangle: "<<a<<' '<<b<<"; area:"<<area()<<endl;
  }
};
class square:public rectangle{
private:
  int b;
public:
  square(){
    a = b = 0;
  }
  double area(){
    return pow(a,2);
  }
  void input(istream&in){
  in>>a;
  }
  void output(ostream&out){
  out<<"Square: "<<a<<"; area:"<<area()<<endl;
  }
};
class circle:public shape{
private:
public:
circle():shape(){
}
double area(){
  return pow(a,2)*3.14;
}
void input(istream&in){
in>>a;
}
void output(ostream&out){
out<<"Circle: "<<a<<"; area:"<<area()<<endl;
}
};

int main(){
triangle * arrT = new triangle[10];
square * arrQ = new square[10];
rectangle * arrR = new rectangle[10];
circle * arrC = new circle[10];
ifstream in("data.txt");
ofstream out("result.txt");
int iT = 0, iQ = 0, iR = 0, iC = 0;
while(!in.eof()){
  char x;
  in>>x;
  switch(x){
  case 't':
  {//triangle * t = new triangle;
  //t -> input(in);
  arrT[iT].input(in);
  iT++;break;
  }
  case 'r':{
    //rectangle * r = new rectangle;
    //r->input(in);
    arrR[iR].input(in);
    iR++;break;
  }
  case 'q':{
    //square * s = new square;
    //s->input(in);
    arrQ[iQ].input(in);
    iQ++;break;
  }
  case 'c':{
    //circle * c = new circle;
    //c->input(in);
    arrC[iC].input(in);
    iC++;break;
  }

}
}
for(int ii =0;ii<iT;ii++){
  arrT[ii].output(out);
}
size_t all = iT+iC+iQ+iR;
//знайти об'єкт з найбільшою площею
shape ** shapes = new shape*[all];
for(int i=0;i<iT;i++){
shapes[i] = arrT+i;
}
for(int i=iT;i<iT+iR;i++){
shapes[i] = arrR+i-iT;
}
for(int i=iT+iR; i<iT+iR+iQ;i++){
shapes[i] = arrQ+i-iT-iR;
}
for(int i=iT+iR+iQ;i<all;i++){
shapes[i] = arrC+i-iT-iQ-iR;
}
//out
double max = shapes[0]->area();
size_t maxPos = 0;
for(int i=0;i<all;i++){
if(shapes[i]->area()>max){
  max = shapes[i]->area();
  maxPos = i;
}
  shapes[i] -> output(cout);
}
cout<<"Max-area element: ";
shapes[maxPos]->output(cout);



}
