#include<bits/stdc++.h>

using namespace std;

string DecimalToHexadecimal(int n){
    string ans="";
    int x=1;
    while(x<=n){
        x*=16;
    }
    x/=16;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit>=10){
            int asci=lastdigit+55;
            ans=ans+(char)asci;
        }else{
            ans=ans+to_string(lastdigit);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<DecimalToHexadecimal(n)<<endl;
    return 0;
}