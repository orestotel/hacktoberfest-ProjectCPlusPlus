//Особливий елемент це такий елемент, що в рядку зліва від нього менші елементи, а справа - більші
#include <iostream>
#include <cmath>
using namespace std;
int main(){
  cout<<"Enter your matrice dimensions(n*n):"<<endl;
  int j=0,k=0;
  cin>>j>>k;
  double arr[j][k];

  cout<<"Your matrice dimensions are ("<<j<<"*"<<k<<")"<<endl;
  for (int i = 0; i<j;i++){
    cout<<"Enter (1)row "<<i<<endl;
    for(int n=0; n<k;n++){
      cout<<"Enter element line "<<n<<"     "<<endl;
      cin>>arr[i][k];
    }
  }//прості числа, побудувати вектор, утворити вектор кожен елемент...
  //Вказівники... Динамічне виділення пам'яті'
  for (int i = 0; i<j;i++){
    cout<<"ROW "<<i+1<<endl;
    for(int n=0; n<k;n++){

      cout<<arr[i][k]<<" <<ELEMENT COUT>>"<<endl;
    }
  }
cout<<"End of COUT"<<endl;
cout<<"Start of calculation"<<endl;

for (int i = 0; i<j;i++){
  cout<<"ROW "<<i+1<<endl;
  for(int n=0; n<k;n++){
if(arr[i][k]<arr[i][j-1]&&arr[i][k]<arr[i][j+1]){
  cout<<"Special found. Erasing rest"<<endl;
  cout<<arr[i][n]<<" <<ELEMENT COUT>>"<<endl;
}
else{
  cout<<"erased"<<" <<ELEMENT COUT>>"<<endl;
  break;
}
  }
}
return 0;

}
