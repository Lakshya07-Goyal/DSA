#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next=NULL;
    //construor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertathead(Node*&head,int d){
    //create new node
    Node*temp=new Node(d);

    //insertion at head
    temp->next=head;
    head=temp;
    return;
}
void insertattail(Node*&tail,int d){
    Node*temp=new Node(d);
    //insertion at tail
    tail->next=temp;
    tail=temp;
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
void insertatmiddle(Node*&head,Node*&tail,int pos,int d){
    Node*temp=new Node(d);
    int cnt=1;
    if(pos==1){
        insertathead(head,d);
        return;
    }
    Node*temp1=head;
    while(cnt<pos-1){
        temp1=temp1->next;
        cnt++;
    }
    temp->next=temp1->next;
    temp1->next=temp;
    if(temp1->next==NULL){
        insertattail(tail,d);
        return;
    }
    return;
}
int main(){
    Node*node1=new Node(15);
    Node*head=node1;
    Node*tail=node1;
    insertattail(tail,99);
    print(head);
    cout<<endl;
    insertathead(head,55);
    print(head);
    cout<<endl;
    insertattail(tail,77);
    print(head);
    cout<<endl;
    insertatmiddle(head,tail,3,88);
    print(head);
    cout<<endl;
    insertatmiddle(head,tail,6,38);
    print(head);
    cout<<endl;
    insertatmiddle(head,tail,1,555);
    print(head);

    return 0;
}