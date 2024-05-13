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

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/(factorial(i-j)*factorial(j));
        }
        cout<<endl;
    }
}