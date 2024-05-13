#include<bits/stdc++.h>

using namespace std;

int fibonacci(int n){
    int f1=0;
    int f2=1;
    int result;
    for(int i=0;i<n;i++){
        int newnum=f1+f2;
        result=f1;
        f1=f2;
        f2=newnum;
    }
    return result;
}
int main(){
    int n;
    cin>>n;

    cout<<fibonacci(n)<<endl;
}