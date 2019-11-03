#include <iostream>
#include <cmath>
using namespace std;
int i = 0;
struct frac{
  int up, dw, ev=0;
  double exact;
};
void inp(frac a){
  cout<<endl;
  cout<<"Input fraction:"<<endl;
  cout<<"up: ";
  cin>>a.up;
  cout<<endl;
  cout<<a.up<<" recorded;"<<endl;
  cout<<"------"<<endl;
  cout<<"dw: ";
  cin>>a.dw;
  cout<<endl;
  cout<<a.dw<<" recorded;"<<endl;
  cout<<"-----------";
  cout<<endl;
  cout<<endl;
  return a;
}
void add(frac a, frac b){
  frac res;
  res.dw = a.dw*b.dw;
  res.up = a.up*b.dw + b.up*a.dw;
  return res;
}
void print(frac a){
cout<<"Fraction: up:"<<a.up;
cout<<" dw:"<<a.dw;
cout<<" ev:"<<a.ev;
cout<<" exact:"<<a.exact<<endl;

}
int main(){
frac a,b, res;
inp(a);
print(a);
}
