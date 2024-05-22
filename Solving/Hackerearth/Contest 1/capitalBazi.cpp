#include<bits/stdc++.h>

using namespace std;

char up(char ch){
    ch= ch-32;
    return ch;
}

int main(){
    string st;
    getline(cin,st);
    for(int i=0;i<st.size();i++){
        if(st[i]==' '){
            cout<<endl;
        }
        if(st[i]>='a' && st[i]<='z'){
            cout<<up(st[i]);
        }
    }
    return 0;
}