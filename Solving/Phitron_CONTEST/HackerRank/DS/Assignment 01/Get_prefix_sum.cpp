#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int>a(n+1);
    vector<long long int>pr_sum(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pr_sum[i]=pr_sum[i-1]+a[i];
    }
    reverse(pr_sum.begin(),pr_sum.end());
    for(int i=0;i<n;i++){
        cout<<pr_sum[i]<<" ";
    }
    cout<<endl;
    return 0;
}