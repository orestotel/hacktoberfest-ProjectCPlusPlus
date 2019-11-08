#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long double x,y=0, d, eps;
	int k=1;
	cout<<"Insert x and eps"<<endl;
	cin>>x>>eps;
	if(fabs(x)<1){
		d=x;
		while(fabs(d)>eps){
			y+=d;
			d*=-x*k/(k+1);
			k++;
		}
		
	}
	cout<<"this is Y: "<<y<<"\n This is ln(x+1): "<<log(x+1)<<endl;
}