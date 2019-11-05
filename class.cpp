#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
  double x,y;
public:
  Point(){x=y=0}
  Point(double x1, double y1=0){x = x1; y = y1}
  point(const Point &a){x = a.x; y=a.y}
  void input(){cin>>x>>y;}
  void optput(){cout<<"()"<<x<<','<<y<<")"<<endl;}
  //can declare as many operations with class as you want
  double distance( Point b){
    return sqrt(pow(x-bx,2)+pow(y-by,2));
  }
  //create destructor.
  //distructor is always single and it has no parameters
  ~Point(){cout<<"destroy object"<<endl;}
}
int main(){
  Point a, e;
  Point b(5), c(7,9), a.x = 5;
  Point a(b), e = c; //copy
  cout<<a.distance<<endl;
// UNFINISHED
}
