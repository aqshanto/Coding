#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    string J = "Jessica";
    getline(cin, S);
    stringstream SS(S);
    string name;
    int c = 0;
    while (SS >> name){
        if (name == J){
            c = 1;
        }
    }
    if (c == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}