#include<bits/stdc++.h>

using namespace std;

int N=1e8+10;
vector<bool> Prime(N,1);

int main(){
    Prime[0]=Prime[1]=false;
    for(int i=0;i<N;i++){
        if(Prime[i]== true){
            for(int j=2*i;j<N;j+=i){
                Prime[j]=false;
            }
        }
    }
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
                if(Prime[n-2]){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}