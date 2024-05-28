#include<bits/stdc++.h>

using namespace std;

int main(){
    string str,str_rev;
    cin>>str;
    for(int i=str.size();i>=0;--i){
        str_rev.push_back(str[i]);//it add a character to a string.
    }
    cout<<str_rev<<endl;

    str.push_back('a');
    cout<<str<<endl;
    return 0;
}