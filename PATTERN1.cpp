#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // 1234
    // 1234
    // 1234
    // 1234

    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=1;j<=n;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }

    cout<<endl;

    // ABCD
    // ABCD
    // ABCD
    // ABCD
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    cout<<endl;

    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // 13 14 15 16
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}