//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

//method 1: using vector and got TLE

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n,q;
//     cin>>n>>q;
//     vector <int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<q;i++){
//         long long int sum=0;
//         int l,r;
//         cin>>l>>r;
//         for(int j=l-1;j<r;j++){
//             sum+=(long long int)v[j];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }


//method 2: using prefix sum

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector <int> v(n+1,0),v1(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v1[i]=v1[i-1]+v[i];
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<v1[r]-v1[l-1]<<endl;
    }
    return 0;
}