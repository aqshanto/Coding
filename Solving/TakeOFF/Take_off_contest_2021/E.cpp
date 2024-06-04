#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int size;
    cin>>size;
    cin.ignore();
    string command;
    cin>>command;
    int l=size-1;
    for(int i=0;i<command.size();i++){
        if(command[i]=='L'){
            l=l-1;
        }else if(command[i]=='R'){
            l=l+1;
        }else if(command[i]=='+'){
            cout<<s[l];
        }
    }cout<<endl;
    return 0;
}