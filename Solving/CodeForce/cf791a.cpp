#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,year=0;
    cin>>a>>b;
    while(1){
        year++;
        if(a*3>b*2){
            break;
        }
        a=a*3;
        b=b*2;
    }
    cout<<year<<endl;
    return 0;
}