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
    int n,r;
    cin>>n>>r;

    cout<<factorial(n)/(factorial(n-r)*factorial(r))<<endl;
}