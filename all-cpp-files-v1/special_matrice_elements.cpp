#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double **a,sum;// ** - vkazivnyk na vkazivnyk
  int m,n,k = 0;
  cin>>m>>n;
  a = new double*[m];
  for(int i = 0; i<m;i++){
    a[i] = new double[n];
  }
  for(int i = 0; i<m; i++){
    for(int j = 0; j<n; j++){
      cin>>a[i][j];
    }
  }
  for(int j=0;j<n;j++){
    sum = 0;
    for(int i=0;i<n;i++){
      sum+=a[i][j];
    } //why delete memory??
    for(int i=0;i<m;i++){
      if(a[i][j]>sum-a[i])[j]){
        k++;
        cout<<a[i][j]<<endl;
      }
    }

  }
  cout<<"k+ "<<k<<endl;
  for(int i = 0; i<m; i++){
    delete[]a[i];
  }
  delete[]a;
  return 0;
}
