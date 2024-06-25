//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int>v(26,0);
    for(int i=0;i<str.size();i++){
        v[str[i]-'a']++;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            cout<<char(i+'a')<<" : "<<v[i]<<endl;
        }
    }
    return 0;
}