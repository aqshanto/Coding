#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="abc";
    string s2="xyz";
    
    cout<<s2.compare(s1)<<endl;
    //if answer shows 0 then they are equal
    //if answer shows negative then first string is small
    //if answer shows positive then first string is larger

     s1="ghkhj";
     s2="asdfasd";
    
    cout<<s2.compare(s1)<<endl;

     s1="abc";
     s2="abc";
    
    if(!s1.compare(s2)) // as the value of s1.compare(s2) is 0 so we use short to true the result
    cout<<"String are equal"<<endl;
    return 0;
}
