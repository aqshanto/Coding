#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),v1(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v1[i]=v[i];
        }
        bool flag=true;
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++){
            if(v[i]!=v1[i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}