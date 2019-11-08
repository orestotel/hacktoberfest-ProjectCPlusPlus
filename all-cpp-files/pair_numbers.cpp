//Exercise from lesson
#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n; cin>>n;
  int  *a=new int[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    if(a[i]%2==0){
      for(int j=i;j<i;j--){ // (int j=i;j>(n-1);j++)
        a[j]=a[j+1];
      }
      a[i+1]*=a[i+1];
      n++; i++;
      //n--;i--;
    }
  }
  int *b= new int[n];
  for(int i=0; i<n;i++){
    cout<<b[i]<<" ";
  }

  for(int i=0;i<n;i++){
  //  b[i]=a[i];
cout<<a[i]<<" ";
  }
  delete[]a;
  delete[]b;
  return 0;
}
