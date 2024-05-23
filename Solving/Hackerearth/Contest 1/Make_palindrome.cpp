#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str; 
        cin>>str;
        int ar[26]={0};
        for(int i=0;i<n;i++){
            ar[str[i]-'a']++;
        }
        int cou=0;
        for(int i=0;i<26;i++){
            if(ar[i]%2!=0){
                cou++;
            }
        }
        if(cou==0){
            cout<<cou<<endl;
        }
        else{
            cout<<cou-1<<endl;
        }
    }
    return 0;
}