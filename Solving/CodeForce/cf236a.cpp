#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int arr[26]={0};
    for(int i=0;i<str.size();i++){
        arr[str[i]-'a']++;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(arr[i]>0){
            c++;
        }
    }
    if(c%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0;
}