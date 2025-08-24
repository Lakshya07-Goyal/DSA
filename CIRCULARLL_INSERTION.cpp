#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //CONS
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next==NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free is  = "<<val;
    }
};
void insertNode(Node*&tail,int element,int d){
    Node*temp=new Node(d);
    if(tail==NULL){
        tail=temp;
        temp->next=temp;
        return;
    }
    Node*curr=tail;
    while(curr->data!=element){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return;
}
void print(Node*&tail){
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node*temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;

    }while(tail!=temp);
    return;
}
int main(){
    Node*tail=NULL;
    insertNode(tail,5,7);  // 7
    print(tail);
    cout<<endl;
    insertNode(tail,7,9);  // 7 9
    print(tail);
    cout<<endl;
    insertNode(tail,7,11);
    print(tail);            // 7 11 9
    cout<<endl;  
    cout<<tail->data<<endl;   //7

return 0;
}
