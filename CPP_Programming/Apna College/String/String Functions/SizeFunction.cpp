#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="Md Abdul Quym Shanto";

    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    //both functions work the same   stringname.size()      stringname.length()
    for(int i=0;i<s1.size();i++){
        cout<<s1[i]<<endl;
    }
    return 0;
}