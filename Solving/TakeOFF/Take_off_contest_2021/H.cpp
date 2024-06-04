#include<bits/stdc++.h>

using namespace std;

int Prime(int n){
    if(n==1 || n==0){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n,c;
        cin>>n;
        for(i=1;i<=n/2;i++){
            c=0;
            if(Prime(i)==1){
                if(Prime(n-i)==1){
                    c=1;
                    break;
                }
            }
        }
        if(c==1){
            cout<<i<<" "<<n-i<<" YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}