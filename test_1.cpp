#include <iostream>
#include <cmath>
using namespace std;
//task 2
int main(){
  int n;
  double max;
  cout<<"input the number of elements of the sequence"<<endl;
  cin>>n;
  double arr[n];
  cout<<"Length of sequence: "<<n<<endl;
  cout<<"now input real numbers."<<endl;
  cout<<endl;
  //fill array with R numbers
  for(int i=0;i<n;i++){
    cout<<"Number #"<<i<<endl;
    cin>>arr[n];
    cout<<arr[n]<<" successfully recorded;"<<endl;
    cout<<endl;
  }
  //calculate the closest float
  max = arr[0];
  for(int i=0;i<n;i++){
if(fabs(arr[i]-round(arr[i]))<=0.5){
  cout<<fabs(arr[i]-round(arr[i]))<<" less than 5 or even to;"<<endl;
}
if(fabs(arr[i]-round(arr[i]))>0.5){
  cout<<fabs(arr[i]-round(arr[i]))<<"more than 5"<<endl;
}
  }
  cout<<endl<<"end of calculation"<<endl;
}
