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

}
int main(){

}
