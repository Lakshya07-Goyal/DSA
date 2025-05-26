#include<iostream>
using namespace std;
// PASS BY VALUE is copy of argument is passed to function
void changex(int x){
    x=x*3;
    cout<<x;
    return;
}
int main(){
    int x=7;                    // x is passed to changex()
    changex(x);                 //21
    cout<<endl;
    cout<<x;                    //7
    return 0;
}