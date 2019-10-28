#include <iostream>
#include <cmath>
using namespace std;
void sort(double *a, int n){
  double temp;
  for(int i=0;i<n-1;i++){
    for(int j=0; j<n-i-i;j++){
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
  return 0;
}
int main(){

}
