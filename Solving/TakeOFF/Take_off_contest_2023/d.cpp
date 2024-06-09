#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    a--;
    b--;
    c--;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int suml=0,sumr=0;
    for(int i=a;i>b;i--){
        suml+=ar[i];
    }
    for(int i=a;i<c;i++){
        sumr+=ar[i];
    }
    cout<<max(suml,sumr)<<endl;
    return 0;
}