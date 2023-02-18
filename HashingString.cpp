#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // for any char value int hash[256]={0};
    int hash[26] = {0};
    for(int i = 0;i<=s.size();i++){
        hash[s[i]-'a']++;// hash[s[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout<<hash[c-'a']<<endl; // hash[c]
    }

}