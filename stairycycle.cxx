
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, k=0, n; bool t; cin>>n;
	for(int i=1; i<=n; i++){
		cin>>x;
		if(x>0){
			t = true;
			for( int j=2; j<=sqrt(x); j++){
				if(x%j==0){
					t= false; break;
				}
			}
			if(t){
				k++; cout<<"x= "<<x<<endl;
			}
		}

	}
			cout<<"k= "<<k<<endl;
		return 0;
}