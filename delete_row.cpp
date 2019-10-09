//дано прямокутну матрицю м*н. Видалити рядок, сума елементів якого мінімальна
//This program still doesn't delete the row with the lowest element,
//neither it does delete the line with the lowest sum, which is the second step
// #ToDo
#include <iostream>
using namespace std;

int main()
{
  int m, n,count, max;
 const int dou = 2;
  {
    cout << "Input row:" << endl;
    cin >> m;
    cout << "Input Lines" << endl;
    cin >> n;
  } //set dimensions
  cout<<endl;
int carr[m][dou];
//set memory
  int** a = new int* [m];

  for (int i = 0; i < m; ++i)
  {
    a[i] = new int[n];
  }

//set counting memory
int b[m];

//intake cycle
cout<<"INPUT NUMBERS"<<endl;
  for (int i = 0; i < m; ++i)
  {
    cout<<endl;
    cout<<"###########"<<endl;
    cout<<"Row number "<<i<<endl;
    for (int j = 0; j < n; ++j)
    {
      cout<<endl;
      cout<<"Element#"<<j<<endl;
      cin >> a[i][j];
    }
  }
//calculation cycle
max=a[0][0];
cout<<endl;
cout<<"End of INPUT"<<endl;
cout<<"CALCULATING....."<<endl;
cout<<endl;
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {

      if(a[i][j]>max){
        count+=a[i][j];
        max = a[i][j];
        cout<<max<<"  ["<<i<<";"<<j<<"]"<<endl;
      }
      else{cout<<max<<" Not changed;"<<endl;}
    }
  //  cout<<"^^"<<count<<"^";//does not work (BUG).
                              // Must return sum of row
    count=0;
  }
  cout<<"successfully calculated."<<endl;
  cout<<endl;
cout<<"Deleting"<<endl;
//deleting cycle
for (int k = 0; k < m; ++k)
{
  for (int o = 0; o < n; ++o)
  {
    cout<<a[k][o]<<" (i;j) element"<<endl;
    if(max==a[k][o]){
      cout<<a[k][o]<<" Element;"<<endl;
        for (int j = 0; j < o; ++j)
        {
         a[k][j]=0;
         cout<<a[k][j]<<"debug"<<endl;
        }
        cout<<endl;

      cout<<" deleted ("<<k<<" "<<o<<")"<<endl;

    }
    cout<<a[k][o]<<" result;"<<endl;
  }
  cout<<"End deleting..."<<endl;
  cout<<endl;
//output cycle
cout<<"OUTPUT:"<<endl;
  for (int i = 0; i < m; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      cout<< a[i][j]<<"'";
    }
    cout<<endl;
  }
  cout<<"Max. Element: "<<max<<endl;




  return 0;
}
}
