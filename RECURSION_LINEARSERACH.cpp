#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int tar){
    if(n==0){return -1;}

    if(arr[n-1]==tar){return n-1;}

    return linearsearch(arr,n-1,tar);
}
int main(){
    int arr[]={4,6,8,3};
    int n=sizeof(arr)/sizeof(int);
    int tar=6;
    cout<<linearsearch(arr,n,tar);
    return 0;
}