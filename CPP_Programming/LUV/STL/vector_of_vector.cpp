#include<bits/stdc++.h>

using namespace std;

int main(){
    vector< vector<int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        // vector<int>temp;
        // for(int j=0;j<a;j++){
        //     int num;
        //     cin>>num;
        //     temp.push_back(num);
        // }

        // we can do it without declaring any temp vector;

        v.push_back(vector<int>());
        for(int j=0;j<a;j++){
            int num;
            cin>>num;
            v[i].push_back(num);
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}