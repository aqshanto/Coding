#include<bits/stdc++.h>

using namespace std;

int main(){
    string str,str_rev;
    cin>>str;
//Method 1:

    // for(int i=str.size()-1;i>=0;--i){
    //     str_rev.push_back(str[i]);
    // }
    // if(str == str_rev){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }
//Method 2:

    int i=0,j=str.size()-1,c=1;
    while (1){
        if(str[i]!=str[j]){
            c=0;
            break;
        }
        if(i>=j){
            break;;
        }
        i++;j--;
    }
    if(c==1){
        cout<<"YES"<<endl;
    }else if (c==0){
        cout<<"NO"<<endl;
    }
    return 0;
}