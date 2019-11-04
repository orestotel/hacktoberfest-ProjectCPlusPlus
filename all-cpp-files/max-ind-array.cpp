
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int n=10;
	int a[n], max, ind;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	max=a[0]; ind=0;
	for(int i=1; i<n; i++){
		if(a[i]>max){
			max=a[i];
			ind=i;
		}
	}
	for(int i=0; i<n;i++){
		cout<<a[i]<<"  "<<endl;
	}
}
