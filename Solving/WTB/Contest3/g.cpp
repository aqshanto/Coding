#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n1,n2,n3,n4,n5,n6;
        cin>>n1>>n2>>n3>>n4>>n5>>n6;

        int first_total=(n1+n2+n3+n4+n5+n6);

        int budget;
        cin>>budget;

        int m1,m2,m3,m4,m5,m6;
        cin>>m1>>m2>>m3>>m4>>m5>>m6;

        int next_total=(m1+m2+m3+m4+m5+m6);
        
        
        if(first_total>budget){
            cout<<"Case "<<i<<": "<<next_total+(first_total-budget)<<endl;
        }else if(first_total<=budget){
            if((next_total-(budget-first_total))<0){
            cout<<"Case "<<i<<": "<<0<<endl;
            }else{
            cout<<"Case "<<i<<": "<<next_total-(budget-first_total)<<endl;
            }
        }
    }
    return 0;
}