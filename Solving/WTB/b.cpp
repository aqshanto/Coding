#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string S,str;
    cin>> T;
    cin>>S;
    for(int i=0;i<T;i++){
        if(S[i]=='f' && S[i+1]=='o' &&S[i+2]=='x'){
            i=i+3;
        }else{
            str.push_back(S[i]);
        }
    }
    cout<<str;
    cout<<str.size()<<endl;
    return 0;
}