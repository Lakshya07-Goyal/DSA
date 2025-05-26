#include<iostream>
using namespace std;
int fac(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
    }
    return p;
}
int ncr(int n,int r){
    int a=fac(n);
    int b=fac(r);
    int c=fac(n-r);
    return a/(b*c);
}
int main(){
    cout<<ncr(4,2)<<endl;
    cout<<ncr(5,2)<<endl;
    cout<<endl;
}