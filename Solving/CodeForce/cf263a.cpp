//https://codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[6][6],i,j,r,c;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                c=i;
                r=j;
            }
        }
    }
    cout<<abs(3-c)+abs(3-r)<<endl;    
    return 0;
}