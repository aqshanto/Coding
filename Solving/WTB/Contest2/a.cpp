#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int maxnum= max(a,b);
    int rest=6-maxnum+1;
    if(rest==6){
        cout<<"1/1"<<endl;
    }else if(rest==5){
        cout<<"5/6"<<endl;
    }else if(rest==4){
        cout<<"2/3"<<endl;
    }else if(rest==3){
        cout<<"1/2"<<endl;
    }else if(rest==2){
        cout<<"1/3"<<endl;
    }else{
        cout<<"1/6"<<endl;
    }
    return 0;
}