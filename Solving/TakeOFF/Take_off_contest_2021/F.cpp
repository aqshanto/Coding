#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int l,r,d,num,i;
        cin>>l>>r>>d;
        
        if(l<=d && r>=d){
            for(i=l;;i++){
                if(i%10==d){
                    num=i;
                    break;
                }
            }
            if(num>r){
                cout<<"0"<<endl;
            }else{
                long long int dif=r-num;
                cout<<dif/10+1<<endl;
            }
        }else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}