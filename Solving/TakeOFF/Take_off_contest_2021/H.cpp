#include<bits/stdc++.h>

using namespace std;

int Prime(int n){
    if(n==1 || n==0){
        return 0;
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
        if(n<3){
            cout<<"NO"<<endl;
        }else{
            if(n%2==0){
                cout<<"YES"<<endl;
            }if(n%2!=0){
                if(Prime(n-2)){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}