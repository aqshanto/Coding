#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;

    transform(str.begin(),str.end(),str.begin(),::tolower);
    int frequency[26];
    for(int i=0;i<26;i++){
        frequency[i]=0;
    }
    for(int i=0;i<str.size();i++){
        frequency[str[i]-'a']++;
    }
    char ans ='a';
    int maxF =0;
    for(int i=0;i<26;i++){
        if(frequency[i]>maxF){
            maxF = frequency[i];
            ans=i+'a';
        }
    }
    cout<<maxF<<ans<<endl;
}