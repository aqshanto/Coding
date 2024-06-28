#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=n-1;i>0;i--){
            while(a[i-1]>=a[i] && a[i-1]>0){
                a[i-1]/=2;
                count++;
            }
            if(a[i-1] == a[i]){
                count = -1;
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}