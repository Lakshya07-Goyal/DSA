#include<iostream>
//#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>s;
    pair<string,int>q("lakshya",3);
    s.insert(q);  
    s["goyal"]=2;
    s["goyal"]=7;
    cout<<s.size()<<endl;   //2
    cout<<s["goyal"]<<endl;   //7
    cout<<s["college"]<<endl;   //0
    cout<<s.at("college")<<endl;  //0
    cout<<s.at("lakshya")<<endl; //3
    cout<<s.size()<<endl;       //3
    cout<<s.count("bro")<<endl;  //0
    s.erase("college");    
    cout<<s.size()<<endl;     //2
    cout<<"1st method"<<endl;
    for(auto i:s){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //iterator
    cout<<"through iterator"<<endl;
    unordered_map<string,int> :: iterator it=s.begin();
    while(it!=s.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}