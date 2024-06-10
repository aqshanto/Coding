#include<bits/stdc++.h>

using namespace std;

int main(){
    double n,s,dis=0;
    cin>>n>>s;
    double size=n;
    while(n){
        dis=dis+3.14159*2*n;
        cout<<dis<<endl;
        n=n-s;
        if(n<=0){
            break;
        }
    }
    cout<<fixed<<setprecision(10)<<dis+size<<endl;
    return 0;
}