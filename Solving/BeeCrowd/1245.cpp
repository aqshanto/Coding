#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    while(cin>>test){
        int T[100][2];
        memset(T,0,sizeof T);
        for(int i=0;i<test;i++){
            int num;char ch;
            cin>>num>>ch;
            T[num][ch=='D']++;
        }
        int total=0;
        for(int i=0;i<100;i++){
            total+=min(T[i][0],T[i][1]);
        }
        cout<<total<<endl;
    }
    return 0;
}