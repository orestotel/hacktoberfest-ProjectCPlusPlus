#include <iostream>
#include <cmath>
using namespace std;
bool isFibo(int x){
  if(x<=0) return false;
  if(x==1) return true;
  int x1,x2,xn;
  x1 = x2 = 1;
  while((xn=x1+x2)<x){
    x1=x2;
    x2=xn;
  }
  if(xn==x){
    return true;

  }
  return false;

}
int main(){
int n, a, k=0;
cout<<"INPUT NUMBERS QUANTITY:"<<endl;
cin>>n;
for(int i=0;i<n;i++){
  cout<<"enter number:";
  cin>>a;
  if(isFibo(a)){
    k++;
  }
}
    cout<<"NUMBER OF FIBONACCI NUMBERS:"<<k<<endl;
  return 0;
}
