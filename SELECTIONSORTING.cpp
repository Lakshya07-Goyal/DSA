#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void print(int arr[],int n){
     for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            
        }
        return;
}

int main(){
    int arr[]={4,5,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    print(arr,n);
    return 0;
}