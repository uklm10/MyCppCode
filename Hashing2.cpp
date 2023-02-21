#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    int n; cout<<"enter number ";
    cin>>n; cout<<endl;
    int arr[n]; 
    map<int,int>mpp; // unordered_map
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    // precompute
    // map<int,int>mpp;      //map use less data than an array/hash
    // for(int i = 0; i<n;i++){
    //   mpp[arr[i]]++;  
    // }
    // iterate in the map
    // for(auto it : mpp){
    //     cout<<it.first<<" -> "<<it.second << endl;
    // }


    int q;
    cout<<"enter thr number you want to check ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<mpp[number] << endl;
    }
}