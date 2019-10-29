#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
  if(n<2)return false;
  for(int i=2; i<=sqrt(n);i++){
    if(n%i==0){return false;}
  };
  return true;
}
bool isMirror(int n){
  int rn = 0,temp = n;
  while(temp){
    rn=rn*10+temp%10;
    temp/=10;
  }
  if(n==rn){return true;}
  return false;
}
int count_if(int*A,int n, bool(*fr)(int)){
//це означає, що ми будемо передавати сюди функцію якусь
//bool(*fr)(int)
  int k = 0;
  for(int i=0; i<n;i++){
    if(fr(A[i])){
      k++;
    }
    return k;
  }
}

int main(){
  int n, *A;
  cin>>n;
  A = new int[n];
  for(int i=0; i<n;i++){
    cin>>A[i];
    bool(*pr)(int) = isPrime;
    bool(*m)(int) = isMirror;
    cout<<"Prime: "<<count_if(A,n,pr)<<", symethric: "<<count_if(A,n,m)<<endl;
  }
  system("pause");
  return 0;
}
