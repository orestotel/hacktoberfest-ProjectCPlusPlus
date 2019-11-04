#include <iostream>
#include<cmath>
using namespace std;
int main(){
  int n, sum=0;
  cout<<"Enter the dimension NxN:";
  cin>>n;
  int actual = 3*n-2;
  int ac_c = actual;
  cout<<endl;
    int **arr = new int* [n];
    int *vect = new int[actual];
    for(int i=0; i<n;i++){
      cout<<"Creating the array;"<<endl;
      arr[i] = new int[n];
    }
    cout<<endl;
    for(int i=0; i<actual;i++){
      cout<<"Assigning vect;"<<endl;
      vect[i] = 1;
    }
  //record

//  cout<<"enter the array"<<endl;
//  for(int i = 0; i<n; i++){
//    for(int j = 0; j<n;j++){
//      cout<<"enter ["<<i<<";"<<j<<"] element:  ";
//      cin>>arr[i][j];
//      cout<<endl;
//    }
//  }
int cou = 1;
for(int i = 0; i<n; i++){
  for(int j = 0; j<n; j++){
    arr[i][j] = cou;
    cou++;
  }
}
  //print
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n;j++){
      cout<<arr[i][j]<<" ' ";
    }
    cout<<endl;
  }
  //calculate
  cout<<"calculation"<<endl;
for(int i=n-1;i>=1;i--){
vect[actual - ac_c] = arr[i][n-1];
cout<<" vect - > "<<arr[i][n-1];
ac_c--;
}
cout<<endl;
cou = n-1;
for(int i = 0; i<n; i++){
  //for(int j = 0; j<n;j++){
  if(n-2>=i){
    vect[actual-ac_c] = arr[i][cou];
    cout<<" vect - > "<<vect[actual-ac_c];
    cou--;
  }
  //  }
}
cout<<endl;
for(int i=n-1;i>=0;i--){
  vect[actual-ac_c] = arr[i][0];
  cout<<" vect - > "<<vect[actual-ac_c];
  ac_c--;
} 
cout<<endl;
//print RESULT
cout<<"VECTOR CREATED! :)"<<endl;
return 0;
}
