#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a=0,d=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='D'){
            d++;
        }else if(str[i]=='A'){
            a++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }else if(a<d){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}