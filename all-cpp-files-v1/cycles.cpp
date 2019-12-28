#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, k =0;
	cin>>x;
	if(x>=1&&x<=27){
		for(int i=1; i<=9; i++){
			for(int j=0; j<=9; j++){
				for(int l=0; l<=9; l++){
					if((i+j+l)==x){
						k++;
						cout<<i<<j<<l<<endl;
					}
				}
			}
		}
	}
}