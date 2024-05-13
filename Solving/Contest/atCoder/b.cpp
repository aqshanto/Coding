//https://atcoder.jp/contests/abc352/tasks/abc352_b
#include<bits/stdc++.h>

using namespace std;

int main(){
    string S;
    string T;
    cin>>S;
    cin>>T;
    int size1=S.size();
    int size2=T.size();
    int j=0;
    for(int i=0;i<size1;i++){
        while(S[i]!=T[j]){
            j++;
        }
        if(S[i]==T[j]){
            cout<<j+1<<endl;
        }
        j++;
    }
    return 0;
}