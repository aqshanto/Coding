#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int albet[26]={0};
    cin>>str;
    bool flag=true;
    if(str.size()!=26){
        flag=false;
    }else if(str.size()==26){
        for(int i=0;i<str.size();i++){
            if(str[i]<='Z' && str[i]>='A'){
                albet[str[i]-'A']++;
                if(albet[i]>1){
                    flag=false;
                    break;
                }
            }
        }
        for(int i=0;i<26;i++){
            if(str[i]=='?'){
                for(int i=0;i<26;i++){
                    if(albet[i]==0){
                        str[i]=i+'A';
                        albet[i]++;
                    }
                }
            }
        }
    }
    if(flag==false){
        cout<<"-1"<<endl;
    }else{
        cout<<str<<endl;
    }
    return 0;
}