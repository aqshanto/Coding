#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b,c,d,e,f;
    int ap,bp,cp,dp,ep,sum=0;
    cin>>a>>ap;
    cin>>b>>bp;
    cin>>c>>cp;
    cin>>d>>dp;
    cin>>e>>ep;
    int n;
    cin>>n;
    while(n--){
        cin>>f;
        if(f==a) sum+=ap;
        else if(f==b) sum+=bp;
        else if(f==c) sum+=cp;
        else if(f==d) sum+=dp;
        else if(f==e) sum+=ep;
    }
    cout<<"XXL "<<sum/90<<endl;
    cout<<"XL "<<(sum%90)/30<<endl;
    cout<<"L "<<((sum%90)%30)/10<<endl;
    return 0;
}