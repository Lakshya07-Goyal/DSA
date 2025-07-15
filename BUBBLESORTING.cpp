#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool is_flag=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                is_flag=true;
            }
        }
        if(!is_flag){
            return;
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
    bubblesort(arr,n);
    print(arr,n);
    return 0;
}