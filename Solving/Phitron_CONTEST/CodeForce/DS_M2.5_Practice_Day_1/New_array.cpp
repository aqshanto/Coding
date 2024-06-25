//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    vector<int>V;
    for(int i=0;i<n;i++){
        V.push_back(B[i]);
    }
    for(int i=0;i<n;i++){
        V.push_back(A[i]);
    }
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }cout<<endl;
    return 0;
}