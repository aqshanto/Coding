#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector<int>v={2,3,4,5,6};
    // for(int &value : v){
    //     cout<<value<<endl;
    // }

    // vector<pair<int,int>>v={{1,2},{2,3},{3,4}};
    // for(pair<int,int> value : v){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }

    vector<pair<int,int>>v={{1,2},{2,3},{3,4}};
    for(auto value : v){
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}