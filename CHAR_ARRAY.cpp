#include<iostream>
using namespace std;
int getlen(char name[]){
    int count=0;
    int i=0;
    while(name[i]!='\0'){ //'\0' is the null character
        count++;
        i++;
    }
    return count;
}
int main(){
    char name[20]; 
    cout<<"enter name"<<endl;  //size pass is imp.
    cin>>name;
    name[4]='\0';
    cout<<"name is "<<name<<endl; 
    cout<<"length of string "<<getlen(name);
    return 0;

}