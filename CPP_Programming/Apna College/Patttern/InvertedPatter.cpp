#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-1-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}