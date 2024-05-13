#include<bits/stdc++.h>

using namespace std;

void fun(int i){
    if(i==6)
        return ;
    fun(i+1);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}