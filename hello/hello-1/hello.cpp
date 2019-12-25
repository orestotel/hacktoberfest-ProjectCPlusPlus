#include <iostream>
#include <string>
#include <fstream>
#include <signal.h>
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
    }}
  out<<arr[maxPos];

  in.close();
  ifstream in2("data-1.txt");
  in>>n;
  overtime * arr_1 = new overtime[n];
  for(int i=0; i<n; i++){
    in2>>arr_1[i];
    out<<arr_1[i];
  }

  max = arr_1[0].getSum();
  int maxPos_1=0;
  string * numbers = new string[n];
  int j = 0;
  numbers[0]=arr_1[0].getNumber();
  for(int i=1; i<n; i++){
    if(arr_1[i].getSum()>max){
      max = arr_1[i].getSum();
      maxPos_1 = i;
    }
    }
for(int k = 0;k<n;k++){
  numbers[k]=arr_1[k].getNumber();

  }

  for(int i=0;i<n;i++){
  for(int j=0;j<n-1;j++){
  if(numbers[j]>numbers[j+1]){
    string temp = numbers[j];
    numbers[j] = numbers[j+1];
    numbers[j+1] = temp;
  }
  }
}
string * numbers2 = new string[n];
int w = 0;
numbers2[w]=numbers[0];
w++;
for(int i=1;i<n;i++){
if(numbers[i-1]!=numbers[i]){
numbers2[w]=numbers[i];
w++;
}

}
out<<arr_1[maxPos_1];

for(int i=0; i<n;i++){
  cout<<numbers[i]<<" ";
}
cout<<endl;

for(int i=0; i<w;i++){
  cout<<numbers2[i]<<" ";
}
int*totalSum = new int[w];
for(int i=0;i<w;i++){
  totalSum[i]=0;
  for(int j=0;j<n;j++){
    if(numbers2[i]==arr_1[j].getNumber()){
      totalSum[i]+=arr_1[j].getSum();
    }
  }
  cout<<numbers2[i]<<" : "<<totalSum[i]<<endl;
}

}
