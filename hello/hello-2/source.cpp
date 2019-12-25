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
    out<<p.companyName<<"; ("<<p.direction[0]<<" -> "<<p.direction[1]<<") $:"<<p.price<<endl;
    return out;
  }
  string dirOut(){
    return "("+direction[0]+" -> "+direction[1]+")";
  }
  string nameOut(){
    return companyName;
  }
  double priceOut(){
    return price;
  }
  void input(istream&in){
    in>>companyName>>direction[0]>>direction[1]>>price;
  }
};
class luggage:public oblik{
  protected:
    double mass;
    double coef;
  public:
    luggage():oblik(){
      mass = 0;
      coef = 0;
    }
    friend istream&operator>>(istream&in, luggage&p){
    in>>p.companyName>>p.direction[0]>>p.direction[1]>>p.price>>p.mass>>p.coef;
      p.price = p.price*(1+p.mass*p.coef);
      //coefficient must be 10+ times smaller than mass
      return in;
    }
    friend ostream&operator<<(ostream&out, luggage&p){
      out<<p.companyName<<"; ("<<p.direction[0];
      out<<" -> "<<p.direction[1]<<")";
      out<<" mass:"<<p.mass<<"; coef:"<<p.coef<<" $:"<<p.price<<endl;
      return out;
    }

};
class business:public luggage{
private:

public:

};
int main(){
  ifstream in("input-1.txt");
  ofstream out("result.txt");
  int n = 0;
//PHASE 1
  in>>n;
oblik * arr1 = new oblik[n];
in>>arr1[0];
out<<arr1[0];
double max = arr1[0].priceOut();
size_t maxPos = 0;
for(int i=1; i<n;i++){
  in>>arr1[i];
    if(max>arr1[i].priceOut()){
      maxPos = i;
      max = arr1[i].priceOut();
    }
  out<<arr1[i];
}
out<<arr1[maxPos].dirOut()<<" - cheapest direction;"<<endl;
//PHASE 2
  in.close();
  in.open("input-2.txt");
//in.open("input-2.txt",istream&in);
out<<endl;
in>>n;
luggage * arr2 = new luggage[n];
in>>arr2[0];
out<<arr2[0];
max = arr2[0].priceOut();
maxPos = 0;
for(int i=1;i<n;i++){
  in>>arr2[i];
  if(max>arr2[i].priceOut()){
    max = arr2[i].priceOut();
    maxPos = i;
  }
  out<<arr2[i];
}
out<<"Cheapest w/luggage: "<<arr2[maxPos].nameOut()<<" "<<arr2[maxPos].dirOut();


return 0;
}
