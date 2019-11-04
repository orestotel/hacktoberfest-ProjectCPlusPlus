#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int m,n;
  cin>>m>>n;
  int **a=new int *[m];
  for(int i=0;i<m;i++){
    a[i] = new int[n];
  }
  for(int i=0; i<m;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  int max=a[0][0], jmax=0;
  for(int i=0; i<m; i++){
    for(int j=0;j<n;j++){
      if(a[i][j]>max){
        max=a[i][j];
        jmax=j;
      }
    }


  }
  for(int i=0; i<m;i++){
    for(int j=jmax;j<n-1;j++){
      a[i][j]=a[i][j+1];
    }

  }
  n--;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
  }
  return 0;
}

//Наступне завдання:
//дано прямокутну матрицю м*н. Видалити рядок, сума елементів якого мінімальна

//дано прямокутну матрицю м*н. поміняти місцями стовпці з максимальним і мінімальним елементами.

//дано прямокутну матрицю м*н.
// Після рядка і стовпця з максимальним елементом, вставити нульовий стовбець і рядокз нульових елементів
