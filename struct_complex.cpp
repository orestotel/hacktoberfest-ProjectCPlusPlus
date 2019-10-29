#include <iostream>
#include <cmath>
using namespace std;
//complex numbers

struct complex{
  double re,im;
}; //always use semicolon after types;
void input(complex &x){
  cin>>x.re>>x.im;
}
void pring(complex x){
  cout<<x.re;
  if(x.im>0){
    cout<<"+";
  }
  cout<<x.im<<"*i"<<endl;
}
complex add(complex x,complex y){
  complex res;
  res.re = x.re+y.re;
  res.im = x.im+y.im;
  return res;
};
complex bool(complex x, complex y){
  complex res;
  res.re = x.re*y.re - x.im*y.im;
  res.im = x.re*y.im + x.im*y.re;
  return res;
}
//скалярний добуток двох комплексних векторів
//multiplication of two complex vectors.
int main(){
  int n;
  cin>>n;
  complex *a,*b, scalar;

  a = new complex[n];
  b = new complex[n];
  for(int i=0;i<n;i++){
    input(a[i]);
  }
  //must separate to make understandable input
  for(int i=0;i<n;i++){
    input(b[i]);
  }
  scalar.re = scalar.im = 0;
  for(int i = 0; i<n; i++){
    scalar = add(scalar,mult(a[i],b[i]));
  }
  
  cout<<"scalar is equal to: "
  print(scalar);
  cout<<endl;

  delete[]a;delete[]b;
  return 0;
}
