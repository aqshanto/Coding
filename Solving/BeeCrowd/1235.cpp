#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin>>test;
    cin.ignore();
    string str;
    for(int i=0;i<test;i++){
        getline(cin,str);
        int size=str.size();
        int halfSize=size/2;
        for(int i=halfSize-1;i>=0;i--){
            cout<<str[i];
        }
        for(int i=size-1;i>=halfSize;i--){
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}