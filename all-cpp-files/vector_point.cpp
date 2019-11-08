#include <iostream>
#include <cmath>
using namespace std;
struct point{
  double x,y;
};
void input(point &a){
  cin>>a.x>>a.y;
}
void print(point a){
  cout<<"("<<a.x<<","<a.y<<")"<<endl;
}
double distance(point a, point b){
  return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
//return array of points of vectors.
//reloading function input();
void input(point*A,int n){
  for(int i=0; i<n;i++){
    input(A[i]);
  }
}

int main(){
  int n;
  cin>>n;
  int p1,p2;//coordinates of vecters
  p1 = p2 = 0;
  point *p = new point [n];
  input(p,n);
  double max = 0,l; //module
  for(int i=0; i<n-1;i++){//subtracting n-1
    //for better appereance of the program
    for(int j = i+1; j<n;j++){
      l = distance(i,j);
      if(l>max){
        max = l;
        p1 = i+1;
        p2 = j+1;
      }
    }
  }
  cout<<"max distance = "<<max<<";"<<endl;
  cout<<"Coordinates: p1="<<p1;<<"; p2="<<p2<<";"<<endl;
  cout<<endl;
  cout<<"ORIGINAL OUTPUT:"<<endl;
  cout<<"max dist = "<<max<<"point"<<p1<<"=";
  print(p[p1-1]);
  cout<<"point"<<p2;
  print(p[p2-1]);
  delete[]p;
  return 0;
}
