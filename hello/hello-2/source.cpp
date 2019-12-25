//розробити тип для обліку проданих авіаквитків
//назва авіакомпанії
//назва маршруту(пара міст)
//вартість квитка
//METHODS
//Утворити перелік квитків з різними даними
//вивести в стандартний потік утворений масив
//вивести назву маршруту з найдешевшим квитком
//-----------------------------
//тип продані авіаквитки для пасажирів з багажем,
//які крім характеристик квитка мають ще МАСУ БАГАЖУ
//тоді ціна буде price*( 1 + coefficent*mass)
//ввести дані з файлу в масив
//визначити назви компаній і маршрути з найдешевшим квитком
//вивести перелік усіх маршрутів
//------------------------------------------
//розробити тип для обліку проданих квитків бізнес-класу
//вартість = вартість з багажем * coefficient
// ввести у спільний масив дані квитків з трьох файлів
//знайти компанії та маршрути з найдешевшим квитком
//вивести перелік усіх маршрутів цих компаній
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//all tickets are sold
class oblik{
protected:
string companyName;
string * direction = new string[2];
double price;
public:
oblik(){
    companyName = "";
    direction[0] = "";
    direction[1] = "";
    price = 0;
  }
  friend istream&operator>>(istream&in, oblik&p){
    in>>p.companyName>>p.direction[0]>>p.direction[1]>>p.price;
    return in;
  }
  friend ostream&operator<<(ostream&out, oblik&p){
    out<<p.companyName<<' '<<p.direction[0]<<' '<<p.direction[1]<<' '<<p.price<<endl;
    return out;
  }
  void input(istream&in){
    in>>companyName>>direction[0]>>direction[1]>>price;
  }
};

class luggage:public oblik{
protected:

public:

};
class business:public luggage{
private:

public:

};
int main(){
  ifstream in("input-1.txt");
  ofstream out("result.txt");
  int n = 0;
  in>>n;
oblik * arr1 = new oblik[n];
for(int i=0; i<n;i++){
in>>arr1[i];
out<<arr1[i];
}
return 0;
}
