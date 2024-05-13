#include<bits/stdc++.h>

using namespace std;

int HexadecimalToDecimal(string str){
    int ans=0;
    int x=1;
    int size=str.size();
    int lastDigit;
    for(int i=size-1;i>=0;i--){
        if(str[i]<='F' && str[i]>='A'){
            lastDigit = str[i]-55;
        }else{
            lastDigit = str[i]-'0';
        }
        ans=ans+lastDigit*x;
        x=x*16;
    }
    return ans;
}

int main(){
    string n;
    cin>>n;

    cout<<HexadecimalToDecimal(n)<<endl;
    return 0;
}