#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter marks = ";
    cin>>n;
    if(n>=90){
        cout<<"garde is A";
    }
    else if(n>=80 && n<90){
        cout<<"grade is B";
    }
    else {
        cout<<"good";
    }
    return 0;
}