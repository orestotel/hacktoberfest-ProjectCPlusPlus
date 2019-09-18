#include <iostream>
using namespace std;
void DoskNum(){ //"Досконалі числа"

}
void HappyNum(){ //DOES NOT WORK PROPERLY YET
  int x, nums[6];
  cout<<"--Happy numbers. \nInsert a 6-digit number:...";
  cin>>x;
  for(int i=0; i<=5; i++){
    nums[i] = x%10^i;
    cout<<nums[i]<<"\n"<<endl;
  }
  cout<<"array recorded..."<<endl;
  if((nums[0]+nums[1]+nums[3])==(nums[4]+nums[5]+nums[6])){
    cout<<"The number is \'happy\'. Yay :D\n";
  }
  else{
    cout<<"The number is not \'happy\';"<<endl;
    cout<<"1)Try another number; \n 2)end\n Insert answer...";
    cin>>x;
    if(x==1){
      HappyNum();
    }
    else{
      cout<<"End of compilation of this function"<<endl;
    }
  }
}
int main(){
HappyNum();

system("wait");
return 0;
}
