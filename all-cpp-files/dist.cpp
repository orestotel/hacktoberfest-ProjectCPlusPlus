#include <iostream>
#include <cmath>
//дано н точок на площині. визначити площу
//і периметер н-кутника, заданого цими точками
using namespace std

double dist(double x1, double y1, double x2, double y2){
  return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
double square(double a, double b, double c){
  double p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
  int n;
  cin>>n;
  double *x=new double[n];
  double *y=new double[n];
  for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
  }
  double s=0,p=0, a,b,c;
  for(int i=1; i<n-1; i++){
    a = dist(x[0],y[0], x[i],y[i]);
    b = dist(x[i],y[i],x[i+1],y[i+1]);
    c = dist(x[0],y[0],x[i+1],y[i+1]);
    s+=square(a,b,c);
  }
  for(int i=0;i<n-1;i++){
    p+=dist(x[i],y[i],x[i+1],y[i+1]);
  }
  p+=dist(x[0],y[0],x[n-1],y[n-1]);
  cout<<"s = "<<"; p = "<<p<<";"<<endl;
  delete[]x;delete[]y;
  return 0;
}
//дано три різні масиви різної розмірності
