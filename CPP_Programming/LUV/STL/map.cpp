#include<bits/stdc++.h>

using namespace std;

void print(map<int,string> mp){
    cout<<mp.size()<<endl;
    for(auto value:mp){
        cout<<value.first<<" "<<value.second<<endl;
    }
}

int main(){
    map<int,string>mp;
    mp[1]="abc"; //O(log(n))
    mp[5]="def";
    mp[3]="sad";
    mp.insert({4,"asd"});
    // map<int,string> ::iterator it;
    // for(it=mp.begin();it!=mp.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // for(auto value:mp){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }

    print(mp);

    //map functions

    // map find
    // auto it=mp.find(3);//O(log(n))
    // if(it == mp.end()){
    //     cout<<"no value"<<endl;
    // }else{
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // map erase
    //if 3 exist in map
    // mp.erase(3);
    // print(mp);

    //if didn't exist in map 
    // auto it =mp.find(7);//O(log(n))
    // if(it!=mp.end()){
    //     mp.erase(7);
    // }
    // print(mp);
    
    
    return 0;
}