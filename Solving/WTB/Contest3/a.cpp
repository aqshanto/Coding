#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int total=a;
    while(a>=b){
        total=total+(a/b);
        a=(a/b)+(a%b);
    }
    cout<<total<<endl;
    return 0;
}