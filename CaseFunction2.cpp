#include <iostream>
#include <cmath> // for sine function
using namespace std;
void FirstFunc(x){//The First Task
  cout<<"This is the first task\n Input value:";
  cin>>x;
  if(x>0){
    x = 2*sin(x);
  }
  if(x<=0){
    x = 6-x;
  }
  cout<<"The result is "<<x<<", compilation over.";
}
void SecondFunc(x){
  cout<<"This is the second task\n Input value:";
  cin>>x;
  if(x<-2||x>2){
    x = x*2;
  }
  else x=-3*x;
  cout<<"The result is "<<x<<", compilation over.";
}
void ThirdFunc(x){
  cout<<"This is the third task\n Input value:";
  cin>>x;
  if(x<=0){
    x=-x;
  }
  if(x<2&&x>0){
    x=x*x;
  }
  if(x>=2){
    x=4;
  }
  cout<<"The result is "<<x<<", compilation over.";
}
void FourthFunc(x){
    cout<<"This is the fourth task\n Input value:";
    cin>>x;
    if(x<0){
      x=0;
    }
    if((x<=x%2){
      x=1;
    }
    if(x<=x%2+1){
      x=-1;
    }
    cout<<"The result is "<<x<<", compilation over.";
}
int main(){
double x;
cout<<"Input value:";
cin>>x;
if(x>0){
  x = 2*sin(x);
}
if(x<=0){
  x = 6-x;
}
cout<<"The result is "<<x<<", compilation over.";
  system("wait");
  return 0;
}
/*This program is more efficient in
this case than the CaseFunction1.cpp, and it workd*/
