#include<iostream>
using namespace std;
int main()
{
  const int n = 10;

  int a[n], sum = 0, max = 0, pos1, pos2, k, l;
  
  for (int i = 0; i <= n; ++i)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    
    while (a[i] < 0)
        {
          ++i;
        }
      
      pos1 = i;
      sum = 0;
      while (i < n && a[i] >= 0)
      {
        sum += a[i]; ++i;
      }
      pos1 = i;
      if (sum > max)
      {
        max = sum;
        k = pos1;
        l = pos2;
      }
    
  }

  for (int i = k; i < l; ++i)
  {
    cout << a[i] << "";
  }

  cout << "Max sum" << max << endl;

  system("pause");
  return 0;

}
