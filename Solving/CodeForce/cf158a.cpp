//https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if((a[i]>0) && (a[i]>=a[k])){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}