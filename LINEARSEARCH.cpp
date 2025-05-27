#include<iostream>
using namespace std;
int  linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"found at index ";
            return i;
        } 
    }
    return -1;
}
int main(){
    int arr[]={1,2,34,8,87,32,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    cout<<linearsearch(arr,size,887);
    cout<<endl;
    cout<<linearsearch(arr,size,87);
    return 0;
}