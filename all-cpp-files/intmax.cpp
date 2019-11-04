#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, c, d, h, min = 1000, arg=0, y;//int_MAX
	cout<<"Input c, d, h:"<<endl;
	cin>>c>>d>>h;
	for(x=c; x<=d+h/2; x+=h){
		y=sin(x)*x;
		cout<<x<<"\t"<<y<<endl;
		if(y<min){
			min=y;
			arg=x;
		}
		}
	cout<<"min = "<<min<<";arg = "<<arg<<endl;
	return 0;
}