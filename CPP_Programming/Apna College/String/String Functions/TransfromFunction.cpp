#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;

    transform(str.begin(),str.end(),str.begin(), :: toupper);
    //functionname(string begin , string end, from where we want to transform , :: coversion);
    cout<<str<<endl;

    transform(str.begin() ,str.end(),str.begin(),:: tolower);
    cout<<str;
}