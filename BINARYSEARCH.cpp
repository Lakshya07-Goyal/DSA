#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int target){
 
    int st=0;
    int end=size-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else return mid;
    }
    return -1;
}
int main(){
    int arr[]={0,4,8,67,78,99};
    cout<<binarysearch(arr,6,8)<<endl;
    cout<<binarysearch(arr,6,85)<<endl;
    return 0;
}