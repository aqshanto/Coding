#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s1="asdfasdfa sdfasd fasd fasdf";
    
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
}