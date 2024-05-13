#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="asdfasdf asdf asdf asf";
    cout<<s1<<endl;
    s1.clear();     //this function is used for clear a stirng
    int a=s1.empty();// this function shows the result in 0 or 1
    cout<<a<<endl;
    if(s1.empty())
    cout<<"string is empty"<<endl;
    else
    cout<<"string is not empty"<<endl;
}