//дано прямокутну матрицю м*н. Видалити рядок, сума елементів якого мінімальна
//You forgot to assign count to some value at the start of the program, that's why it returned strange values.
//The deleting cycle was in some strange for loop that contained also the output cycle, I think that wasn't yout intention so i removed it and replaced by two loops
//one that removes row with lowest value and one that removes row with lowest sum.

#include <iostream>
using namespace std;

int main()
{
	int row, line, count = 0, max = 0, minEl, minElPos = 0, lowestSum, lowestSumPos;
	bool writeLowestSum = true;

 const int dou = 2;
  {
    cout << "Input row:" << endl;
    cin >> row;
    cout << "Input Lines" << endl;
    cin >> line;
  } //set dimensions
  cout<<endl;
int carr[row][dou];
//set memory
  int** a = new int* [row];

  for (int i = 0; i < row; ++i)
  {
    a[i] = new int[line];
  }

//set counting memory
int b[row];

//intake cycle
cout<<"INPUT NUMBERS"<<endl;
  for (int i = 0; i < row; ++i)
  {
    cout<<endl;
    cout<<"###########"<<endl;
    cout<<"Row number "<<i<<endl;
    for (int j = 0; j < line; ++j)
    {
      cout<<endl;
      cout<<"Element#"<<j<<endl;
      cin >> a[i][j];
    }
  }
//calculation cycle
max=a[0][0];
minEl = a[0][0];
minElPos = 0;

cout<<endl;
cout<<"End of INPUT"<<endl;
cout<<"CALCULATING....."<<endl;
cout<<endl;
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < line; ++j)
    {
		if (a[i][j] < minEl)
		{
			minEl = a[i][j];
			minElPos = i;
		}

		count += a[i][j];
      if(a[i][j]>max){

        max = a[i][j];
        cout<<max<<"  ["<<i<<";"<<j<<"]"<<endl;
      }
      else{cout<<max<<" Not changed;"<<endl;}
    }
    cout<<"SUM == ^"<<count<<"^" << endl;
    cout<<endl;
	if (writeLowestSum)
	{
		lowestSum = count;
		lowestSumPos = i;
		writeLowestSum = false;
	}
	if (count < lowestSum)
	{
		lowestSum = count;
		lowestSumPos = i;
	}

    count=0;
  }
  cout<<"successfully calculated."<<endl;
  cout<<endl;
  cout<<"Deleting"<<endl;
  //deleting cycle
  //here "delete" row with lowest element
  for (int k = 0; k < line; ++k)
  {
   	a[minElPos][k] = 0;
  }

  for (int k = 0; k < line; ++k)
  {
    cout<<"del - ["<<lowestSumPos<<";"<<k<<"]"<<endl;
	a[lowestSumPos][k] = 0;
  }

  cout<<"End deleting..."<<endl;
  cout<<endl;
  //output cycle
  cout<<"OUTPUT:"<<endl;
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < line; ++j)
    {
      cout<< a[i][j]<<"'";

    }
    if(i==lowestSumPos){
      cout<<" (deleted)";
    }
    cout<<endl;
  }
  cout<<"Max. Element: "<<max<<endl;
  return 0;
}
