//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<q;i++){
        long long int sum=0;
        int l,r;
        cin>>l>>r;
        for(int j=l-1;j<r;j++){
            sum+=(long long int)v[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}