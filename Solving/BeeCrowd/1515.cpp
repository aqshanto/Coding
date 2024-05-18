#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    while(1){
        cin>>test;
        if(test==0)
            break;
        string str[test];
        int year,time,max=2222,pos=0;
        for(int i=0;i<test;i++){
            cin>>str[i]>>year>>time;
            if(year-time<max){
                max=year-time;
                pos=i;
            }
        }
        cout<<str[pos]<<endl;
    }
    return 0;
}