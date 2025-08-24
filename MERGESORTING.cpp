#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            j++;
        }
        else{
            temp.push_back(arr[i]);
            i++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++){
        arr[i+st]=temp[i];
    }
    return;
}
void mergesort(vector<int>&arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        mergesort(arr,st,mid);
        mergesort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
    return;
}
int main(){
    // input size of 10..
    vector<int>arr{25,97,22,11,99,45,86,93,1,5};
    int st=0;
    int end=arr.size()-1;
    mergesort(arr,st,end);
    for(int val:arr){
        cout<<val<<" ";
    }
    
    return 0;
}