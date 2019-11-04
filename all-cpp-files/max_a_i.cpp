#include <iostream>;
#include <cmath>
using namespace std;
void input(double *a; int n){
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
}
double max(double *a; int n){
  for(int i=0;i<n;i++){
    if(a[i]>max_el){
      max_el=a[i];
    }
  }
  return max_el;
}

//unverified start
double min(double *a; int n){
  for(int i=0;i<n;i++){
    if(a[i]<max_el){
      min_el=a[i];
    }
  }
  return min_el;
  }
//unverified end

  void add(double *a, double *b, double *res, int h){
    for(int i=0; i<n; i++){
      res[i]=a[i]+b[i];
    }
  }
  int main(){
    int n;
    cin>>n;
    double *a,*b,*c,*r1,*r2;
    a = new double[n]; b = new double[n];
    c = new double[n]; r1 = new double[n];
    r2 = new double[n];
    input(a,n); input(b,n); input(c,n);
    if(min(a,n)<max(b,n)){
      t = min(b,n)/max(a,n);
      add(b,c,r1,n);
      t+=max(c,h)/min(r1,n);
    }
    else{
      add(a,c,r2,n);
      t = max(r1,n)+min(r2,n);
    }
    delete[]a;
    delete[]b;
    delete[]c;
    delete[]r1;
    delete[]r2;
    return 0;
  }
