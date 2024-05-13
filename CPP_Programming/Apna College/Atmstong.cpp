#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;
    double sum=0.0;
    while(n!=0){
        int remider=n%10;
        sum+=pow(remider,3);
        n/=10;
    }
    if(sum==original){
        cout<<"ArmStrong Number"<<endl;
    }else{
        cout<<"NOT"<<endl;
    }
}