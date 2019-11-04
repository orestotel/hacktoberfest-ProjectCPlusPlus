#include <iostream>
#include<cmath>
using namespace std;
int main(){
  int n, counter=0;
  cout<<"Enter the dimension value: ";
  cin>>n;
  cout<<endl;
  double *arr = new double[n];
  for(int i=0; i<n;i++){
    cout<<"Enter real #"<<i<<": ";
    cin>>arr[i];
    cout<<endl;
  }
    double max = arr[0], min = arr[0];
  //scan for maximum
  for(int i=0; i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  //scan for minimum
  for(int i=0; i<n;i++){
    if(arr[i]<min){
      min = arr[i];
    }
  }
  //how many maximums
  for(int i=0; i<n;i++){
    if(arr[i]==max){
      counter++;
    }
  }
  cout<<"this is the  maximum element: "<<max<<endl;
  cout<<"this is the number of maximum elements: "<<counter<<endl;
  //declare and calculate result array
  double *res = new double[n+counter];
  for(int i=0; i<n+counter;i++){
    if(arr[i]==max){
      res[i] = min;
      res[i+1] = arr[i];
      i++;
    }
    else{
      res[i]=arr[i];
    }
  }
  //output RESULT
  for(int i=0;i<n+counter;i++){
    if(i%5==0){
      cout<<endl;
    }
    cout<<res[i]<<" ' ";
  }
  delete[]arr;
  delete[]res;
  return 0;
}
