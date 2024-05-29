#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int low=0,high=0;
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            low++;
        }else if(str[i]>='A' && str[i]<='Z'){
            high++;
        }
    }
    if(high<=low){
        transform(str.begin(),str.end(),str.begin(),:: tolower);
    }else{
        transform(str.begin(),str.end(),str.begin(),:: toupper);
    }
    cout<<str<<endl;
    return 0;
}