#include <iostream>
#include<cmath>
using namespace std;
int main(){
  int n, sum=0;
  cout<<"Enter the dimension NxN:";
  cin>>n;
  int actual = 3*n-2;
  cout<<endl;
    int **arr = new int* [n];
    int *vect = new int[actual];
  for(int i=0; i<n;i++){
    cout<<"Creating the array;"<<endl;
    arr[i] = new int[n];
    cout<<endl;
  }
  //record
  cout<<"enter the array"<<endl;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n;j++){
      cout<<"enter ["<<i<<";"<<j<<"] element:  ";
      cin>>arr[i][j];
      cout<<endl;
    }
  }
  //print
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n;j++){
      cout<<" ["<<i<<";"<<j<<"]     :";
      cout<<arr[i][j]<<endl;
    }
  }
  //calculate
  for(int j=n-1; j>0; j--){
    vect[sum] = arr[n-1][j];
    sum++;
  }

  cout<<"sum = "<<sum<<";"<<endl;

  for(int i = n-1; i>0; i--){
    for(int j = n-1; j>0; j--){
      cout<<"["<<i<<"]   sum "<<vect[sum]<<endl;
      vect[sum] = arr[i][j];
      sum++;
  }
}
for(int j=n-1; j>0; j--){
  vect[sum] = arr[0][j];
  sum++;
}
//print RESULT
cout<<"VECTOR CREATED:"<<endl;
for(int i=0;i<sum;i++){
  cout<<" vector: "<< vect[i]<<" ;"<<endl;

}

}
