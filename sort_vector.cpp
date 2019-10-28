#include <iostream>
#include <cmath>
using namespace std;
void sort(double *a, int n){
  double temp;
  for(int i=0;i<n-1;i++){
    for(int j=0; j<n-1-i;j++){
      if(a[j]>a[j+1]){
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}
//Have to delete repeating special_matrice_elements
void unique(double*a,int&n){
  for(int i=0; i<n; i++){
    for(int j = i+1; j<n;j++){
      if(a[i]!=a[j]){
        break;
      }
      else{
        for(int k = j; k<n-1;k++){
          a[k] = a[k+1];
          //     1 1 1 2 3 3
          // - > 1 1 2 3 3 3
          // - > 1 1 2 3 3 -
        }
        n--;
        j--;
      }
    }
  }
}
void print(double *a, int n){
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
int main(){
int n;
cin>>n;
double *a = new double[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
print(a,n);
sort(a,n);
print(a,n);
unique(a,n);
print(a,n);
delete[]a;
system("pause");
return 0;
}
