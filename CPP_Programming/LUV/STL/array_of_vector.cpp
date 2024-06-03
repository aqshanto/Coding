#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> v[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        for(int j=0;j<a;j++){
            int b;
            cin>>b;
            v[i].push_back(b);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}