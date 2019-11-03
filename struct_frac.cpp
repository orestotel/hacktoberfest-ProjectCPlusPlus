#include <iostream>
#include <cmath>
using namespace std;
int i = 0;
struct frac{
  long double exact =0.01;
  double up, dw, ev=0;
  int r_up=0, r_dw;
};
void inp(frac &a){
  cout<<endl;
  cout<<"Input fraction:"<<endl;
  cout<<"up: ";
  cin>>a.up;
  if(a.up!=floor(a.up)){
    cout<<"should input integers"<<endl;
    while(a.up!=floor(a.up)){
      cout<<"please input INT:";
      cin>>a.up;
    }
  }
  cout<<a.up<<" recorded;"<<endl;
  cout<<"~~~~~~~~~~"<<endl;
  cout<<"dw: ";
  cin>>a.dw;
  if(a.dw!=floor(a.dw)||a.dw==0){
    cout<<"should input integers (NOT 0 as well)"<<endl;
    while(a.dw!=floor(a.dw)||a.dw==0){
      cout<<"please input INT (NOT 0):";
      cin>>a.dw;
    }
  }
  cout<<a.dw<<" recorded;"<<endl;
  cout<<"~~~~~~~~~~~";
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
      else{
        res.r_up = res.up;
        res.ev = 0;

      }

      res.exact = (res.up/res.dw);
  return res;
};
void shorten(frac &a){
  a.r_dw = a.dw;
  a.r_up = a.up;
  cout<<"--simplification_start--"<<endl;
  if((a.r_up>0 && a.r_dw<0) || (a.r_up<0 && a.r_dw<0))
  {
    a.r_up*=-1;
    a.r_dw*=-1;
    cout<<")negated"<<endl;
  }
  for(int i= sqrt((abs(a.r_up)>abs(a.r_dw)?abs(a.r_up):abs(a.r_dw)));i>1;i--)
  {
    if(a.r_up%i == 0 && a.r_dw%i == 0)
    {
      a.r_up/=i;
      a.r_dw/=i;
    }
  }
  cout<<"(simplifying...";

      if(a.up>=a.dw){
        a.r_up = a.up;
        while(a.r_up>=a.dw){
          a.r_up= a.r_up-a.dw;
          a.ev = a.ev+1;
        }
      }
      else{
        a.r_up = a.up;
        a.ev = 0;

      }



    cout<<")successfully simplified;"<<endl;
      a.exact = (a.up/a.dw);
    cout<<"--end_of_simplification--"<<endl;
    cout<<"```````````````````````````";
}
void print(frac a){
cout<<"Fraction: up:"<<a.up;
cout<<" dw:"<<a.dw;
cout<<" ev:"<<a.ev;
a.exact = (a.up/a.dw);
cout<<" exact:"<<a.exact<<endl;
cout<<"```````````````````````````";

cout<<a.up<<"/"<<a.dw<<"= <"<<a.ev;
if(a.r_up!=0){
cout<<" | "<<a.r_up<<"/"<<a.r_dw<<">"<<endl;
cout<<"```````````````````````````";
}
else{
cout<<">";
cout<<"```````````````````````````";
}
//a.r_up!=0?cout<<" | "<<a.r_up<<"/"<<a.r_dw<<">"<<endl:cout<<">";
//switch of prin-ting. works with division
}
frac divide(frac a, frac b){
  frac res;
res.up = a.up*b.dw;
res.dw = b.up*a.dw;
  return res;
}
frac multiply(frac a, frac b){
  frac res;
res.up = a.up*b.up;
res.dw = a.dw * b.dw;
  return res;
}



int main(){
frac a,b, res;
cout<<"----------addition----------"<<endl;
inp(a);
inp(b);
res = add(a,b);
shorten(res);
print(res);
cout<<endl;
cout<<"-------end_of_addition-------"<<endl;
//---------------------------
cout<<"-------start_of_division-----"<<endl;
inp(a);
inp(b);
res = divide(a,b);
shorten(res);
print(res);
cout<<endl;
cout<<"--------end_of_division------"<<endl;
//---------------------------
cout<<"---start_of_multiplication---"<<endl;
inp(a);
inp(b);
res = multiply(a,b);
shorten(res);
print(res);
cout<<endl;
cout<<"----end_of_multiplication----"<<endl;



return 0;
}
