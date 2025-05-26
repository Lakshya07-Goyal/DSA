#include<iostream>
using namespace std;
int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}
int main(){
  cout<<sum(4)<<endl;;
  cout<<sum(10)<<endl;
  return 0;
}