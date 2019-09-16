#include <iostream>
#include <cmath> // for sine function
using namespace std;
void FirstFunc(){
  double x;//The First Task
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
void SecondFunc(){
  double x;
  cout<<"This is the second task\n Input value:";
  cin>>x;
  if(x<-2||x>2){
    x = x*2;
  }
  else x=-3*x;
  cout<<"The result is "<<x<<", compilation over.";
}
void ThirdFunc(){
  double x;
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
void FourthFunc(){
  double x;
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
  void FinalFunc(){
    double x;
    char y;
    cout<<"This is the last tast with TEXT INTERFACE.\n"<<endl;
    cout<<"Please enter your X value for further operations";
    cin>>x;
    cout<<"\n Now, Please choose an option:\n \n
    1) calculate CoSine\n
    2) calculate   Sine\n
    3) calculate tangens\n
    ... Input \'1\', \'2\' or \'3\'"
    cin>>y;
    if(y==1){
      x = Cos(x);
    }
    if(y==2){
      x = sin(x);
    }
    if(y==3){
      x =  tan(x);
    }
cout<<x<<" result";
  }
int main(){
double x;
FirstFunc();SecondFunc();ThirdFunc();FourthFunc();
FinalFunc();
  system("wait");
  return 0;
}
/*This program is more efficient in
this case than the CaseFunction1.cpp, and it workd*/
