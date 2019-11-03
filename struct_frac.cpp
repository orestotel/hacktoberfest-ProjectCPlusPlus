#include <iostream>
#include <cmath>
using namespace std;
int i = 0;
struct frac{
  int up, dw, ev=0;
  int r_up=0;
  double exact;
};
void inp(frac &a){
  cout<<endl;
  cout<<"Input fraction:"<<endl;
  cout<<"up: ";
  cin>>a.up;
  cout<<a.up<<" recorded;"<<endl;
  cout<<"------"<<endl;
  cout<<"dw: ";
  cin>>a.dw;
  cout<<a.dw<<" recorded;"<<endl;
  cout<<"-----------";
  cout<<endl;
  cout<<endl;
}
frac add(frac a, frac b){
  frac res;
  res.dw = a.dw*b.dw;
  res.up = a.up*b.dw + b.up*a.dw;

    if(res.up>=res.dw){
      res.r_up = res.up;
      while(res.r_up>=res.dw){
        res.r_up= res.r_up-res.dw;
        res.ev = res.ev+1;
      }
    }

  return res;
};
void print(frac a){
cout<<"Fraction: up:"<<a.up;
cout<<" dw:"<<a.dw;
cout<<" ev:"<<a.ev;
a.exact = a.up/a.dw;
cout<<" exact:"<<a.exact<<endl;
cout<<a.up<<"/"<<a.dw<<"= <"<<a.ev<<" | "<<a.r_up<<"/"<<a.dw<<">"<<endl;
}
int main(){
frac a,b, res;
inp(a);
inp(b);
print(add(a,b));
}
