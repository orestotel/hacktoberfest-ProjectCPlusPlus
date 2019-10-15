#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void swap(int &a, int &b){
int t=a;a=b;b=t;
}
int main(){
int x, y;
cout<<"Input variables to swap"<<endl;
cin>>x,y;
cout<<x<<"   "<<y<<endl;
swap(x,y);
cout<<x<<"   "<<y;
return 0;
}
