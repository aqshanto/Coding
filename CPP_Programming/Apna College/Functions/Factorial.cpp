#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int multy=1;
    for(int i=1;i<=num;i++){
        multy*=i;
    }
    return multy;
}

int main(){
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;
}