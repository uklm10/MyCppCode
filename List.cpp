#include<iostream>
#include<list>
using namespace std;

// here used doubley linklisted internaly, two pointer works;  at() function doesnot work here.

int main(){

    list<int>l;

    l.push_back(1);
    l.push_front(2);
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;

    //l.erase(l.begin()); delete only 1st element;
    list<int> n(l);// if you want 5 times 100 then list<int>n(5,100);

}