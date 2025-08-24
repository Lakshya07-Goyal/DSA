#include<iostream>
using namespace std;
int binarysearch(int arr[],int k,int st,int end){
    int mid=st+(end-st)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(st<=end){
        if(arr[mid]>k){
            return binarysearch(arr,k,st,mid-1);
        }
        else{
            return binarysearch(arr,k,mid+1,end);
        }
    }
    return -1;
}
int main(){
    int arr[]={5,9,13,99};
    int n=sizeof(arr)/sizeof(int);
    int k=13;
    int st=0;
    int end=n-1;
    cout<<binarysearch(arr,k,st,end);
    return 0;
}
