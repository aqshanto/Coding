#include<bits/stdc++.h>

using namespace std;

void fun(int i){
    if(i==6)
        return ;
    cout<<i<<endl;
    fun(i+1);
}

int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}