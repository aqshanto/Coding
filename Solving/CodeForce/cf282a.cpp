//https://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x=0;
    while(t--){
        string str;
        cin>>str;
        if(str[0]=='+' || str[2]=='+'){
            x++;
        }else if(str[0]=='-' || str[2]=='-'){
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}