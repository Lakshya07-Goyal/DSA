#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int pre=i-1;
        while(pre>=0 && arr[pre]>curr){
            arr[pre+1]=arr[pre];
            pre--;
        }
        arr[pre+1]=curr;
    }
    return ;
}
int main(){
    vector<int>arr{4,1,5,3,2};
    int n=arr.size();
    insertionsort(arr,n);
    for(int val:arr){
        cout<<val<<" ";
    }
      return 0;
}