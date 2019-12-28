//sectan

#include<bits/stdc++.h>
using namespace std;


int main(){
    float a,b,x;int i=0,k=0,eps;float d,s=0;
    cout<<"ente x ";cin>>x;
    cout<<"enter lower limit ";cin>>a;
    cout<<"enter upper limit ";cin>>b;
    cout<<"enter precision ";cin>>eps;
    for(i=0;i<=10;i++){
        d=pow(x,(2*i+1));
       d=d/(2*i+1);
        if(i%2!=0)
            {d=d*(-1);}
        //cout<<fixed<<setprecision(eps)<<d<<"\n";
        s=s+d;
        cout<<fixed<<setprecision(eps)<<s<<"\n";
       /*if((s-a)<1e-9||(s-b)>1e-9||(d*pow(10,eps))<1)
           break;
       else
        k++;
    }
    cout<<"result "<<k;
*/
}
 return 0;
}
