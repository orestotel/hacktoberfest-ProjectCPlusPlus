#include <iostream>
#include <cmath> // for sine function
using namespace std;
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
