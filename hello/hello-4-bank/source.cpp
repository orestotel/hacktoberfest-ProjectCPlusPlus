#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
//тип для банківських карток
//прізвище, номер, сума коштів
//масив банківських карток
//вивести масив
//вивести елемент з найбільшою сумою коштів

//Gold - має додатковий рахунок
//вивести масив
//для кожної картки знайти загальну суму коштів
//вивести елемент з найб. загальною сумою.

//VIP - розрахунок в кредит на суму до p% загальної суми
//ввести дані у спільний масив вказівників
//для кожної картки знайти найбільшу суму,
//яку можна проплатити(разом з кредитом)
using namespace std;

class card{
protected:
  string surname;
  int number;
  double balance;
public:
  card(){
    surname = "";
    number = 0;
    balance = 0;
  }
  virtual void input(istream&in) = 0;
  virtual void output(ostream&out) = 0;
  virtual double getBalance() = 0;
  virtual double getTotal() =0;
};
class bank:public card{
protected:
  string surname;
  int number;
  double balance;
public:
  bank():card(){
  }
  void input(istream&in){
    in>>surname>>number>>balance;
  }
  void output(ostream&out){
    out<<"Surname: "<<surname<<"; number:"<<number;
    out<<"; balance:"<<balance<<"_$;"<<endl;
  }
  double getBalance(){
    return balance;
  }
  double getTotal(){
    return getBalance();
  }
//  virtual double getTotal() = 0;

};
class gold:public bank{
protected:
  double balance2;
public:
  gold():bank(){
    balance2 = 0;
  }
  double getTotal(){
    return balance+balance2;
  }
  void input(istream&in){
    in>>surname>>number>>balance>>balance2;
  }
  void output(ostream&out){
    out<<"Surname: "<<surname<<"; number:"<<number;
    out<<"; balance-1:"<<balance<<"_$; balance-2:"<<balance2;
    out<<"; total:"<<getTotal()<<"_$"<<endl;
    }
};
class vip:public gold{
private:
double p;
public:
vip():gold(){
p = 0;
}
void input(istream&in){
  in>>surname>>number>>balance>>balance2>>p;
}
double getTotal(){
  return balance+balance2+(balance+balance2)*p;
}
void output(ostream&out){
  out<<"Surname: "<<surname<<"; number:"<<number;
  out<<"; balance-1:"<<balance<<"_$; balance-2:"<<balance2;
  out<<"_$; loan-maximum:"<<p*100<<"%; total:"<<getTotal()<<"_$"<<endl;
}
};
int main(){
  //PHASE 1
  ifstream in("input-1.txt");
  ofstream out("result.txt");
  size_t * n = new size_t[4];
  in>>n[1];
  n[0] = n[1];
  bank * arr1 = new bank[n[1]];
  out<<"Bank cards:"<<endl;
  double max = 0;
  size_t maxPos = 0;
  for(int i=0;i<n[1];i++){
    arr1[i].input(in);
    if(arr1[i].getBalance()>max){
      max = arr1[i].getBalance();
      maxPos = i;
    }
    arr1[i].output(out);
  }
  out<<"Max-balance element == ";
  arr1[maxPos].output(out);
  out<<endl;
//PHASE 2
in.close();
in.open("input-2.txt");
in>>n[2];
n[0] += n[2];
gold * arr2 = new gold[n[2]];
max = 0; maxPos = 0;
for(int i=0;i<n[2];i++){
arr2[i].input(in);
if(arr2[i].getTotal()>max){
  max = arr2[i].getTotal();
  maxPos = i;
}
arr2[i].output(out);
}
out<<"Max balance == ";
arr2[maxPos].output(out);
out<<endl;
//PHASE 3
in.close();
in.open("input-3.txt");
in>>n[3];
n[0]+=n[3];
vip * arr3 = new vip[n[3]];
max = 0;
maxPos = 0;
for(int i=0;i<n[3];i++){
  arr3[i].input(in);
  if(arr3[i].getTotal()>max){
    max = arr3[i].getTotal();
    maxPos = i;
  }
  arr3[i].output(out);
}
out<<"Maximum-total == ";
arr3[maxPos].output(out);
out<<endl;
out<<"All cards"<<endl;
//PHASE RESULT
bank ** arr = new bank*[n[0]];
for(int i=0;i<n[1];i++){
  arr[i] = arr1+i;
}
for(int i=n[1];i<n[2]+n[1];i++){
  arr[i] = arr2+i-n[1];
}
for(int i=n[1]+n[2];i<n[0];i++){
  arr[i] = arr3+i-n[1]-n[2];
}
max = 0;
maxPos = 0;
for(int i=0;i<n[0];i++){
  if(arr[i]->getTotal()>max){
    max = arr[i] ->getTotal();
    maxPos = i;
  }
  arr[i] -> output(out);
}
out<<"Maximum total sum element == ";
arr[maxPos] ->output(out);
  return 0;
}
