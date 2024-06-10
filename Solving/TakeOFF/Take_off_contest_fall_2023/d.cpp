#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int m,a,h,i,r,t;
    cin>>m>>a>>h>>i>>r;
    if(m>0){
        t=m*a+(m-1)*h+i;
    }else{
        t=m*a+i;
    }
        if(t<=r){
            cout<<"Congratulations Ichigo"<<endl;
        }else{
            cout<<"Ichigo will Die single"<<endl;
        }
    return 0;
}