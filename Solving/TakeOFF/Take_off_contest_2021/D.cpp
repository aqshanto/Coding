#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int ans= (a/c)*(b/d);
        cout<<ans<<endl;
    }
    return 0;
}