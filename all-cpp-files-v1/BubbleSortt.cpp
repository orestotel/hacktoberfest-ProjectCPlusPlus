
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int n=10;
	int a[n], temp;
cout<<"input the array to be sorted"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
cout<<"array successfully retrieved"<<endl;
	for(int i=0; i<n-1;i++){
		for(int j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Here's the sorted array:"<<endl;
	for(int i=0; i<n;i++){
		cout<<a[i]<<"  "<<endl;
	}
}
