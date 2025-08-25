#include<iostream>
#include<stack>
using namespace std;
int main(){ 
    // stack is LIFO DATA STRUCTURE
    stack<int>s;
    s.push(5);
    cout<<s.top()<<endl;
    s.push(54);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    if(s.empty()){cout<<"empty";}
    else{cout<<"not empty";}
    cout<<endl;
    s.pop();
    cout<<s.size()<<endl;
    if(s.empty()){cout<<"empty";}
    cout<<endl;
    return 0;
}