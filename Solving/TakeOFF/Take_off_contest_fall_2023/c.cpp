#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,K,wi=0;
    cin>>N>>K;
    int ar[N+1]={0};
    for(int i=1;i<=N;i++){
        cin>>ar[i];
        int t=ar[i]+ar[i-1];
        // cout<<t<<endl;
        if(t>K){
            wi++;
        }
    }
    cout<<wi<<endl;
    return 0;
}