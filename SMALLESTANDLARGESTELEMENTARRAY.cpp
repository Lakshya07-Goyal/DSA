#include<iostream>
#include<climits>
using namespace std;
int smallest(int arr[],int size){
    int smallest=INT_MAX;
    int pos=-1;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            pos=i;
        }
    }
    cout<<"index of smallest element is = "<<pos<<endl;
    cout<<"smallest element is = ";
    return smallest;
}

int largest(int arr[],int size){
    int largest=INT_MIN;
    int pos=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
            pos=i;
        }
    }
    cout<<"index of largest element is = "<<pos<<endl;
    cout<<"largest element is = ";

    return largest;

} 

int main(){
    int arr[]={-9,8,-7,0,65,-4,87,6,-99,8};
    cout<<smallest(arr,sizeof(arr)/sizeof(int))<<endl;
    cout<<largest(arr,sizeof(arr)/sizeof(int))<<endl;
    
    return 0;
}