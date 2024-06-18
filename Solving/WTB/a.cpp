#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int size=str.size(),c=0;
    int j=size-1;
    if(size==1){
        cout<<"NO"<<endl;
    }else{
        for(int i=0;i<size/2;i++){
            if(str[i]!=str[j]){
                c++;
            }
            j--;
        }
        if(c==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}