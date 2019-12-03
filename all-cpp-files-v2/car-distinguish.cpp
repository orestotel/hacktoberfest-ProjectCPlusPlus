#include <iostream>
#include <string>
#include<fstream>
using namespace std;


class Veichle{
protected:
  int year=0;
  string name="";
public:
  setV(){
    cout<<"Enter the name of the car";
    cin>>name;
    cout<<"Enter year of production: ";
    cin>>year;
    cout<<endl;
  }

};
class Sedan:public Veichle{
protected:
  double capacity = 0;
  double price = 0;
public:
  setS(){
    cout<<"set capacity: ";
    cin>>capacity;
    cout<<"Set price: ";
    cin>>price;
    cout<<endl;
  }
};
class Truck:public Veichle{
protected:
  double space = 0;
  double allowedMass = 0;
public:
  setT(){
    cout<<"Set space: ";
    cin>>space;
    cout<<"Set allowed mass: ";
    cin>>allowedMass;
  }
};
int main(){
  int

}

//створити базовий тип транспортний засіб
//рік випуску, назва
//два похідні типи
//пасажирський транспорт
//(місткість, вартість переїзду)
//
//Вантажний транспорт
//(об'єм перевезення, допустима вага)
//
//створити масив вказівників на батьківський тип
//1)посортувати їх за роком випуску
//2)Знайти пасажирський транспорт з максимальною пасажировмісткістю
//3)Вивести всі вантажні транспортні засоби з об'ємом перевезення, більшим за вказаний
