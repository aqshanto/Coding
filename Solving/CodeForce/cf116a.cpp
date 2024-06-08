#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,sum=0,max=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sum= b+(sum-a);
        if(sum>max){
            max=sum;
        }
    }
    cout<<max<<endl;
    return 0;
}