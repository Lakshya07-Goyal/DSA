#include<iostream>
using namespace std;
class Node{
     public:
     int data;
     Node*next=NULL;
     Node*pre=NULL;
     //CONS
     Node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
     }
     //DES
     ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory free is =  "<<val<<endl;
     }
};
void insertathead(Node*&head,int d){
    //NEW NODE
    Node*temp=new Node(d);
    //INSERT
    temp->next=head;
    head->pre=temp;
    head=temp;
    return;
}
void print(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
}
void insertattail(Node*&tail,int d){
    //NEW NODE
    Node*temp=new Node(d);
    //INSERT
    tail->next=temp;
    tail=temp;
    return;

}
void insertatmiddle(Node*&tail,Node*&head,int pos,int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    int cnt=1;
    Node*temp=new Node(d);
    Node*temp2=head;
    while(cnt<pos-1){
        temp2=temp2->next;
        cnt++;
    }
    temp->next=temp2->next;
    temp2->next=temp;
    temp2->next->pre=temp;
    temp->pre=temp2;
    if(temp2->next==NULL){
        insertattail(tail,d);
        return;
    }
    return;
}
int main(){
    Node*Node1=new Node(22);
    Node*head=Node1;
    Node*tail=Node1;
    insertathead(head,77);
    print(head);
    cout<<endl;
    insertathead(head,88);
    print(head);
    cout<<endl;
    insertattail(tail,89);
    print(head);
    cout<<endl;
    insertatmiddle(tail,head,2,100);
    print(head);
    cout<<endl;
    insertatmiddle(tail,head,1,777);
    print(head);
    cout<<endl;
    insertatmiddle(tail,head,4,1);
    print(head);
    cout<<endl;
    insertatmiddle(tail,head,8,17);
    print(head);
    cout<<endl;

    return 0;
}