#include<iostream>
using namespace std;
class stack{
    public:
    //PROPERTIES
    int *arr;
    int top;
    int size;

    //BEHAVIOUR
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(top==size-1){
            cout<<"stack overflow";
        }
        else{
            top++;
            arr[top]=element;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow";
        }
        else{
            top--;
        }
    }

    void peek(){
        if(top>=0){
            cout<<arr[top];
        }
        else{
            cout<<"stack is empty";
        }
    }
    
    void empty(){
        if(top==-1){
            cout<<"stack is empty";
        }
        else 
        cout<<"stack is not empty";
    }

};
int main(){
    stack s1(6);
    s1.empty();
    cout<<endl;
    s1.push(5);
    s1.peek();
    cout<<endl;
    s1.push(54);
    s1.peek();
    cout<<endl;
    s1.push(57);
    s1.peek();
    cout<<endl;
    s1.push(53);
    s1.peek();
    cout<<endl;
    s1.pop();
    s1.pop();
    s1.peek();   //54
    cout<<endl;
    s1.empty();
    cout<<endl;

    return 0;
}