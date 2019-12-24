#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class payment {
private:
string number;
int month;
double suma;
public:
  payment(){
    number = "";
    month = 0;
    suma = 0;
  }

  friend istream&operator>>(istream&in,payment&p){
    in>>p.number>>p.month>>p.suma;
    return in;
  }
  friend ostream&operator<<(ostream&out,payment&p){
    out<<p.number<<' '<<p.month<<' '<<p.suma<<endl;
    return out;
  }
  double getSum(){
    return suma;
  }
  void input(istream&in){
    in>>number>>month>>suma;
  }

};
int main(){
  int n;
  ifstream in("data.txt");
  ofstream out("result.txt");
  in>>n;
  payment * arr = new payment[n];

  for(int i=0; i<n; i++){
    in>>arr[i];
    //arr[i].input(in);
    out<<arr[i];
  }
  double max = arr[0].getSum();
  int maxPos=0;
  for(int i=1; i<n; i++){
    if(arr[i].getSum()>max){
      max = arr[i].getSum();
      maxPos = i;
    }
  }
out<<arr[maxPos];
}
