#include<iostream>
using namespace std;
int prod(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
    }
    return p;
}
int main(){
   cout<<prod(6)<<endl;
   cout<<prod(10)<<endl;
   return 0;
}