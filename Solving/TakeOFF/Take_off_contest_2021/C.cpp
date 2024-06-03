#include<bits/stdc++.h>

using namespace std;

int main(){
    double pi=3.1416;
    double arm;
    cin>>arm;
    cout<<fixed<<setprecision(2)<<arm*arm+(pi*(arm/2)*(arm/2))/2<<endl;
    return 0;
}