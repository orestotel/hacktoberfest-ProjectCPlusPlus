#include <iostream>
#include <cmath>
using namespace std;
//using fractions
int i = 0;
struct fraction{
  double up, dw, even=0;
}; //always use semicolon after types;

//addition of the fractions
fraction add(fraction x,fraction y){
  fraction result;
  bool sw=0;
  //default case
  if(x.dw==y.dw){
    result.up = x.up+y.up;
    result.dw = x.dw;
  }
  if(x.up==x.dw){
    x.even=1;
    x.up=0;
  }
  if(y.up==y.dw){
    y.even=1;
    y.up=0;
  }
  //common dw
  if((x.dw!=y.dw)&&(x.even==0&&y.even==0)){
    y.up = y.up*x.dw;
    y.dw = y.dw*x.dw;
    x.up = x.up*y.dw;
    x.dw = x.dw*y.dw;
    result.up = x.up+y.up;
    result.dw = x.dw;
  }
  else{
    if(x.even==1&&y.even!=1){

    }
    if(y.even==1&&x.even!=1){

    }
    if(x.even==y.even){
      result.up=result.dw=1;
      result.even=2;
    }
  }
  if(sw==0){
  //make fraction right
  if(result.up>result.dw){
    while(result.up>=result.dw){
      result.up-=result.dw;
      result.even += 1;
    }
  }
  if((x.up+y.up)==result.dw){
    result.even=(x.up+y.up)/result.dw;
    result.up=0;
  }
}
return result;
};
void check_add(fraction a, fraction b){
  fraction x=a,y=b,result, res_add=add(a,b);
y.up = y.up*x.dw;
y.dw = y.dw*x.dw;
x.up = x.up*y.dw;
x.dw = x.dw*y.dw;
result.up = x.up+y.up;
result.dw = x.dw;
double divis_a = (result.up/result.dw);
double divis_b = (res_add.even*res_add.dw+res_add.up)/res_add.dw;
if(divis_a==divis_b){
  cout<<"Good addition"<<endl;
}
else{
  cout<<"Wrong addition"<<endl;
}
}
void input(fraction &x){
  cout<<endl;
  cout<<"Please input fraction attributes:"<<endl;
  cout<<"up: ";
  cin>>x.up;
  cout<<"dw: ";
  cin>>x.dw;
  cout<<endl;
}
void print(fraction x){
  cout<<"Here's the fraction:"<<endl;
  cout<<x.even<<"   |   "<<x.up<<"/"<<x.dw<<";"<<endl;
}

int main(){
  int n;
  cin>>n;
  fraction a,b, result;
  cout<<"Input begins."<<endl;
  input(a);
  input(b);
  //check for 0;
  if(a.dw==0||b.dw==0){
    cout<<"Cannot divide 0"<<endl;
    return 0;
  }
  //check if right
check_add(a,b);
print(add(a,b));
cout<<endl;
cout<<"-----------------"<<endl;
cout<<"End of execution."<<endl;

  return 0;
}
