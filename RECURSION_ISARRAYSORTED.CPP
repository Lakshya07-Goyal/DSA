#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n==1){return true;}
    if(arr[n-1]>arr[n-2]){
      return  issorted(arr,n-1);
    }
    return false;
}

int sumelement(int arr[],int n){
        if(n==1){return arr[0];}
        int a=arr[n-1]+sumelement(arr,n-1);
        return a;
}
int main(){
    int arr[]={1,3,6,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<issorted(arr,n);
    cout<<endl;
    cout<<sumelement(arr,n);
    return 0;
}