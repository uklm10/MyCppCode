#include<iostream>
#include<map>
using namespace std;
// map = {key , value} -> unique value , gives us a sorted order // searching time = O(logn)[because using tree]
// unorder map created by hash table, time = O(1)
// find() == always gives us iterator  

int main(){
    map<int,string>m;
    m[1]="udayan";
    m[13]="hello";
    m[2]="khanra";
    m.insert({5,"bheem"});
    for(auto i : m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    cout<<"finding 13 -> "<<m.count(13)<<endl; // finding any valu present or not we use count();

    m.erase(13);
    cout<<"after erase -"<<endl;
    for(auto i : m){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
}