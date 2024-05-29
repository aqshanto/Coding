#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    //we can also declare size of vector

    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // we can initilize a vector with any value

    int n;
    cin>>n;
    vector<int> v(n,4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}