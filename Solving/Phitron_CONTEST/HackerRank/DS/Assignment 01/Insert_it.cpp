#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    cin>>m;
    vector<int>v1;
    for(int i =0;i<m;i++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    cin>>x;
    v.insert(v.begin()+x,v1.begin(),v1.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}