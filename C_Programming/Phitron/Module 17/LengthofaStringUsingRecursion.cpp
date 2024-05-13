#include<bits/stdc++.h>

using namespace std;

int length(string str,int i){
    if(str[i]=='\0')
        return 0;
    int l=length(str,i+1);
    return l+1;
}

int main(){
    string str;
    cin>>str;
    cout<<length(str,0)<<endl;
    return 0;
}