#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){// O(n)
        cin>>a[n];
    }
    int s=0;
    for(int i=0;i<n;i++){ //O(n)
        s+=a[i];
    }
    cout<<s<<endl; //O(1)
    return 0;
}