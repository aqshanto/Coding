#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    while(!cin.eof()){
        getline(cin,str);
        int cap=1,low=0; 
        for(int i=0;i<str.size();i++){
            if(str[i]<='Z' && str[i]>='A'){
                if(cap==1){
                    str[i]=str[i];
                    cap=0;
                    low=1;
                }else if(low==1){
                    str[i]=str[i]+32;
                    low=0;
                    cap=1;
                }
            }else if(str[i]<='z' && str[i]>='a'){
                    if(cap==1){
                    str[i]=str[i]-32;
                    cap=0;
                    low=1;
                }else if(low==1){
                    str[i]=str[i];
                    low=0;
                    cap=1;
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}