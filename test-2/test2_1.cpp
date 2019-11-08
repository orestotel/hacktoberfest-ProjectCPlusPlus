#include <iostream>
#include<cmath>
using namespace std;
int main(){
  int n,sum=0;
  cout<<"Enter length:";
  cin>>n;
  cout<<";"<<endl;
  int *arr = new int[n];
  cout<<endl;
  cout<<"enter the array"<<endl;
  for(int i = 0; i<n; i++){
    cout<<"enter "<<i<<"'th element:";
    cin>>arr[i];
  }
  //calculate
  cout<<"--calculating--"<<endl;
  int counter = 1;//для наглядності
  for(int i = 0; i<n; i++){
    for(int j = n; j>0;j--){
      sum+= arr[i]*arr[j];
      cout<<"#"<<counter<<"  Sum = "<<sum<<endl;
      counter++;
    }
  }
  cout<<"--end-of-calculating--"<<endl;
  //print
  cout<<"printing the array:"<<endl;
  for(int i=0;i<n;i++){
    cout<<"Elem #"<<i<<": "<<arr[i]<<endl;
  }
  cout<<"end of printing the array"<<endl;
  cout<<endl;
  cout<<"THE RESULT IS: "<< sum<<endl;

}
