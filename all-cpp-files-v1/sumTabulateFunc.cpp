#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a,b,h,eps,d,s;
  int k;
  cin>>a>>b>>h>>eps;
  for(double x=a; x<=b+h/2;x+=h){
    d=x*x*x/(6*27);
    k=1;s=0;
    while(fabs(d)>=eps){
      s+=d;
      d*=-x*x/(((2*k+2)*(2*k+3))*9);
      k++;
    }
    cout<<x<<"\t"<<s<<endl;
  }
  return 0;
}
//SUGGESTED INPUT:
//0
//1
//0.1
//0.0001
