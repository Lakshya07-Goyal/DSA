#include<iostream>
using namespace std;
bool isvaild(int arr[],int n,int m,int maxbookallocated){
    int st=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxbookallocated){
            return false;
        }
        if(pages+arr[i]<=maxbookallocated){
            pages+=arr[i];
        }
        else{
            st++;
            pages=arr[i];
        }
    }
    return st>m? false: true;
}
int maxbookallocate(int arr[],int n,int m){
    if(m>n) return -1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int st=0;
        int end=sum;
        int ans=-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(isvaild(arr,n,m,mid)){
                 ans=mid;
                end=mid-1;
            }
            else {
                st=mid+1;
            }
        }
      return ans;
}
int main(){
    int arr[]={2,1,3,4};
    int n=4;
    int m=2;
    cout<<maxbookallocate(arr,n,m);
    return 0;
}