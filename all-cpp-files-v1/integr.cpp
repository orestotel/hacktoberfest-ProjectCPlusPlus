#include <iostream>
#include <cmath>
using namespace std;
double atan_2(double x){
  return atan(x)*atan(x);
}
double sinE (double x){
  return sin(exp(10*x));
}
double integral(double a,double b, int n, double(*f)(double)){
  double s = 0, h = (b-a)/n;
  for(int i=1; i<n-1; i++){
    s+=f(a+i*h);
  }
  s+=(f(a)/2+f(b)/2);
  s*=h;
  return s;
}
int main(){
  double a,b,c,d,integr;
  int n;
  cin>>a>>b>>c>>d>>n;
  double(*pf)(double);
  integr = integral(a,b,n,pf);
  pf = sinE;
  integr+=integral(c,d,n,pf);
  cout<<integral<<endl;
  return 0;
}
