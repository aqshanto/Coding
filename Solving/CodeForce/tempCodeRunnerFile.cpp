#include<bits/stdc++.h>

using namespace std;

int main(){
    int price,money,n;
    cin>>price>>money>>n;
    int total =(n/2)*((2*price)+(n-1)*price);
    if(money>total){
        cout<<"0"<<endl;
    }else
        cout<<total-money<<endl;
    return 0;
}