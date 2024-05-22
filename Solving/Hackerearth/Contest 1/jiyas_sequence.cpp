#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ar[n];
        long long int multi=1;
        for(int j=0;j<n;j++){
            cin>>ar[j];
            multi*=(long long int)ar[j];
        }
        if(multi%10==2 ||multi%10==3 ||multi%10==5){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}