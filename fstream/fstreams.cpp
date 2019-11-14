#include <fstream>
#include <iostream>
using namespace std;
int main(){
  ifstream in("input.txt");
  int k = 0, x;
  while(!in.eof()){
    in>>k;
    k++;
  }
  //while(in>>x){k++};// - поки зчитування допустиме
  in.close();
  in.open("input.txt");
  int *a = new int [k];
  for(int i=0;i<k;i++){
    in>>a[i];
  }
  ofstream.out("result.txt");
  for(int i=0;i<k;i++){
    out<<a[i]<<" ";
  }
  in.close();
  out.close();
  delete[] a;
  fstream inout;
  inout.open("text.txt",ios::in);
  ios::text;
  int x, inout>>x;
  //-----
  inout.close();
  inout.open("text.txt",ios::out);
  inout<<t;

}
//посортувати студентів ха середньою успішністю,
//Знайти факультет з максимальною середньою успішністю.
