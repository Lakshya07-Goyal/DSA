#include<iostream>
using namespace std;
int bitodec(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int r=n%10;
        ans=ans+(r*pow);
        n=n/10;
        pow=pow*2;
    }
    return ans;
}
int main(){
    cout<<bitodec(110)<<endl;
    cout<<bitodec(1101)<<endl;
    return 0;
}