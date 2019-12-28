#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//створити тип одновимірний масив дійсних чисел.
//Методи введення, виведення
//скалярний добуток
//реверсія
//сортування за вказаним критерієм
class vect{
private:
  int n;
  int *arr;
public:
  void write(int num){
    n = num;
    arr = new int[n];
    for(int i=0; i<num; i++){
      cout<<"Enter "<<i<<" elements of the array:"<<endl;
      cin>>arr[i];
    }
    cout<<"Entering finished"<<endl;
  }
  void print(){
    for(int i = 0; i<n; i++){
      cout<<arr[i]<<"' ";
    }
    cout<<"array output finished"<<endl;
  }
  void scalar(vect a, vect b){
    int scal=0;
    for(int i=0; i<a.n;i++){
    scal = scal+a.arr[i]*b.arr[i];
    };
    cout<<"SCALAR: "<<scal<<endl;
  }
  void reverse(vect vect){
    cout<<endl;
    cout<<"reversing...."<<endl;
    int cou = n-1;
    cout<<"n = "<<cou<<endl;
    int *rev = new int[n];
    for(int i=0; i<n;i++){
      vect.arr[i] = rev[cou];
      cou--;
    }
  }
  ~vect(){cout<<"destroyed vector"<<endl;}
};

int main(){
  int n;
  cout<<"enter number of elements:";
  cin>>n;
  cout<<endl;
  vect a;
  vect b;
  vect res;
  a.write(n);
  b.write(n);
  a.print();
  b.print();
cout<<"scalar:  "<<endl;
res.scalar(a,b);
a.reverse(a);
a.print();
b.reverse(a);
b.print();
}
