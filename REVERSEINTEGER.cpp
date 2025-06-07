#include<iostream>
#include<climits>
using namespace std;
int reverse(int n){
    int ans=0;
    while(n>0){
        if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
            cout<<"out of range";
        }
        else {
            int digit=n%10;
            ans=ans*10+digit;
            n=n/10;

        }
    }
    return ans;
}
int main(){
    cout<<reverse(345);
    return 0;
}