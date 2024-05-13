#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="My Name is shanto";
    
    int pos=s1.find("shanto");//it check the whole word not only the first character
    cout<<pos<<endl;
}