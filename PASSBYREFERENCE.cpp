#include<iostream>
using namespace std;
// PASS BY REFERENCE means it pass address of array to function 
void changearr(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
    return;
}
int main(){
    int arr[]={6,8,4};
    int size=sizeof(arr)/sizeof(int);  // it defines size of array 
    changearr(arr,3);
     for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
     }
     return 0;
    
}