/*
Given N strings , print unique strings
in lexiographical order with their
frequency
N <= 10^5
|S| <=100
*/


#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int>mp;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        string str;
        cin>>str;
        mp[str]++;
    }
    for(auto value: mp){
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}