#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class payment {
protected:
string number;
int month;
double suma;
public:
  payment(){
    number = "";
    month = 0;
    suma = 0;
  }
  string getNumber(){
    return number;
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
class overtime:public payment{
private:
int time;
static const int pricePerMinute = 12;
public:
  overtime():payment(){
    time = 0;
  }
  friend istream&operator>>(istream&in,overtime&p){
    in>>p.number>>p.month>>p.suma>>p.time;
    return in;
  }
  friend ostream&operator<<(ostream&out,overtime&p){
    out<<p.number<<' '<<p.month<<' '<<p.suma<<' '<<p.time<<endl;
    return out;
  }
  int totalSum(){
    return suma+time*pricePerMinute;
  }
  void input(istream&in){
    in>>number>>month>>suma>>time;
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
  out<<arr[maxPos];

  in.close();
  ifstream in2("data-1.txt");
  in>>n;
  overtime * arr_1 = new overtime[n];
  for(int i=0; i<n; i++){
    in2>>arr_1[i];
    out<<arr_1[i];
  }

  double max = arr_1[0].getSum();
  int maxPos_1=0;
  string * numbers = new string[n];
  int j = 0;
  numbers[0]=arr[1].getNumber();
  for(int i=1; i<n; i++){
    if(arr_1[i].getSum()>max){
      max = arr_1[i].getSum();
      maxPos_1 = i;
    }
out<<arr[maxPos_1];
    bool check = true;
for(int k = 0;k<=j;k++){
  if(arr[i].getNumber()==arr[k]){
    check = false;
  }
  }
  if(check){
    j++;
    numbers[j]=arr[i].getNumber();
  }
}
for(int i=0; i<j;i++){
  cout<<numbers[i]<<" ";
}
cout<<endl;


}
