#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  double *x = new double[n];
  double *y = new double[n];
  double a,b,c,p,sq=0;
  for(int i=0; i<n;i++){
    cin>>x[i]>>y[i];
    cout<<"accepted x[i] and y[i]"<<endl;
  }
  for(int i=1;i<(n-2);i++){
    a=sqrt(pow(x[0]-x[i],2)+pow(y[0]-y[i],2));
    b=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
    c=sqrt(pow(x[i+1]-x[0],2)+pow(y[i+1]-y[0],2));
    p=(a+b+c)/2;
    sq=sqrt(p*(p-a)*(p-b)*(p-c));
  }
  cout<<"sp = "<<sq<<endl;
  delete[]x;
  delete[]y;
  return 0;
}
