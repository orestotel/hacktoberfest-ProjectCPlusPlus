#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>//включаю всі можливі пакети
using namespace std;
bool checkDivisibility(int n, int tsyfra){
    return (tsyfra != 0 && n % tsyfra == 0);
}
bool allDigitsDivide(int n){
    int temp = n;
    while (temp > 0) {
        int tsyfra = n % 10;
        if (!(checkDivisibility(n, tsyfra)))
            return false;
            temp /= 10;
    }
    return true;
}
int main(){
    int num=0;
    int n;
    cout<<"Введіть кількість цифер: ";
    cin>>num;
    cout<<num<<";"<<endl;
    int arr[num];
    //recording cycle
    
    for(int i=0;i<num;i++){
      cout<<"zapys chysla "<<i<<endl;
      cin>>arr[i];
      cout<<"zapysano"<<endl;
    }
    //calculating cycle
    for(int i=0;i<num;i++){
      cout<<"Число "<<arr[i]<<"  номер №"<<i<<endl;
    if (allDigitsDivide(arr[i])){
        cout << "Ділиться на всі цифри"<<endl;
      }
    if(!allDigitsDivide(arr[i])){
        cout << "не ділиться на всі цифри"<<endl;
      }
      cout<<"Наступне число..."<<endl;
      cout<<endl;

      }
    return 0;
}
