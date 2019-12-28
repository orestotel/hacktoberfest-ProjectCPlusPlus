#include <iostream>
#include <string>
#include<fstream>
using namespace std;


class Veichle{
protected:
  int year=0;
  string name="";
public:
  void setV(){
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
  void setS(){
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
  void setT(){
    cout<<"Set space: ";
    cin>>space;
    cout<<"Set allowed mass: ";
    cin>>allowedMass;
  }
};
int main(){
  cout<<"--Cars-types-program--"<<endl;
  cout<<"Enter the total number of cars: ";
  int n=0;
  bool type = 0
  cin>>n;
  cout<<"Creating "<<n<<" cars;"<<endl;
  cout<<"Keep in mind:"<<endl;
  cout<<"0 - Sedan"<<endl;
  cout<<"1 - Truck"<<endl;

  for(int i=0;i<n;i++){
    cout<<"Enter the type of the car: ";

    switch(type){
      case 0:
      cout<<"Chosen type Sedan"<<endl;
      break;
      case 1:
      cout<<"Chosen type Truck"<<endl;
      break;
    }
  }

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
