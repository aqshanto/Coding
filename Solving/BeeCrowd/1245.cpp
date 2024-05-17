#include<bits/stdc++.h>

using namespace std;

int main(){
    while(!cin.eof()){
        int test,num,total=0;
        char ch;
        cin>>test;
        int E[61]={0};
        int D[61]={0};
        for(int i=0;i<test;i++){
            cin>>num>>ch;
            if(ch=='E'){
                E[num]++;
            }else if(ch=='D'){
                D[num]++;
            }
        }
        for(int i=30;i<=60;i++){
            if(E[i]>0 && D[i]>0){
                if(E[i]==D[i]){
                    total+=E[i];
                }else if(E[i]<D[i]){
                    total+=E[i];
                }else if(E[i]>D[i]){
                    total+=D[i];
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}