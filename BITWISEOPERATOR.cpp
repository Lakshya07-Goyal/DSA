#include<iostream>
using namespace std;
int main(){
    cout<<(6&10)<<endl;    //2
    cout<<(6|10)<<endl;    //14
    cout<<(6^10)<<endl;    //12

    cout<<(10<<2)<<endl;   //40
    cout<<(10>>1)<<endl;   //5

    cout<<sizeof(long long int)<<endl;    //8 byte
    unsigned int x=-2;
    cout<<x;    // it return big no. because we set x as unsigned int

   return 0;
}