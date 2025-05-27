#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int marks[size];
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }


     for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
     }
     cout<<"size of array is = "<<sizeof(marks)/sizeof(int);

     return 0;
}