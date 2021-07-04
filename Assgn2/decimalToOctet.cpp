#include<iostream>
using namespace std;

void baseTenToeight(int num){
   int power=1,ans=0;
   while(num!=0){
     int rem= num%8;
     ans=power*rem+ans;
     power=power*10;
     num=num/8;
   }

   cout<<ans<<"\n";

}
int main(){
    baseTenToeight(453);
}