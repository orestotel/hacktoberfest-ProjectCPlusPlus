#include <iostream>
#include <cmath> // for sine function
using namespace std;
int main(){
  int temp = 1;
  int y;
  cout<<"Hello, please enter your X in the code manually. \n";
  cout<<"The switch function can only accept constant values. \n";

//Insert the X value here
  const int x = 10;
//The code should now output your X value

  cout<<x<<" is the x now\n"<<endl;
  cout<<"input anything to continue...";
  cin>>y;
   switch(x) {
     case (x>0):
        temp = 2*sin(x);
        break; //optional
     case (x<=0):
        temp = 6-x;
        break; //optional
        default: 1==1;
           cout<<"ERROR: Unusual x operand \n";
      }

    cout<<"Function output: "<< temp <<endl;
    cout<<"Compilation is over";

  system("wait");
  return 0;
}
/*In conclusion, it is hereby to say that IF statement is much better practice
than the SWITCH CASE statement, and in this particular case I would say, that
it would have been easier to simply use the IF statement*/
