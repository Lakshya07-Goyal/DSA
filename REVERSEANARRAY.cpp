#include<iostream>
using namespace std;
void reversearr(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return;
}
int main(){
    int arr[]={1,2,3,99,34};
    int size=sizeof(arr)/sizeof(int);
    reversearr(arr,5);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";    
    }
    return 0;
}