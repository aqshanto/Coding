#include<bits/stdc++.h>

using namespace std;

int main(){
    string str,st="ST";
    cin>>str;
    int size=str.size();
    for(int i=0;i<size/2;i++){
        if(str.find(st)==string::npos){
            break;
        }
        int pos=str.find(st);
        str.erase(pos,2);
    }
    
    return 0;
}