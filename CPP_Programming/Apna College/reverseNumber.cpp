#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int reverse=0;
    while(n!=0){
        int reminder=n%10;
        reverse=reverse*10+reminder;
        n/=10;
    }
    cout<<reverse;
}

