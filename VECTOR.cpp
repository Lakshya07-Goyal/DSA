#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec={'a','f','j'};
    cout<<vec[0]<<endl;
    cout<<vec.size()<<endl;
    vec.push_back('r');
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.size()<<endl;
    vec.pop_back();
    cout<<vec.capacity()<<endl;
    cout<<vec.size()<<endl;
    return 0;
}
