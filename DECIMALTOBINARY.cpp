#include<iostream>
using namespace std;
int dectobi(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int r=n%2;
        ans=ans+(r*pow);
        pow=pow*10;
        n=n/2;
    }
    return ans;
}
int main(){
   for(int i=0;i<=20;i++){
    cout<<dectobi(i)<<endl;
   }
    return 0;
}