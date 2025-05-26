#include<iostream>
using namespace std;
int sumofdigit(int n){
    int digitsum=0;
    while(n>0){
        int r=n%10;
        n=n/10;
        digitsum+=r;
    }
    return digitsum;
}

int main(){
    cout<<sumofdigit(123)<<endl;
    cout<<sumofdigit(13458)<<endl;
    return 0;
}