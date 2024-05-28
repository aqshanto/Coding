//https://codeforces.com/problemset/problem/281/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    if(str[0]<='z' && str[0]>='a'){
        str[0]=str[0]-32;
    }else if(str[0]<='Z' && str[0]>='A'){

    }
    cout<<str<<endl;
    return 0;
}