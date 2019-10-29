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
    cin>>arr[i];
    cout<<arr[i]<<" successfully recorded;"<<endl;
    cout<<endl;
  }
  //calculate the closest float
  max = arr[0];
  for(int i=0;i<n;i++){
if(fabs(arr[i]-round(arr[i]))<=max){
  max=fabs(arr[i]-round(arr[i]));
  cout<<"NEW MAX:"<<max<<"  NUMBER IS "<<arr[i]<<"; element num is#"<<i<<endl;
}
else{cout<<"no new max"<<endl;}
  }
  cout<<endl<<"end of calculation"<<endl;
}
