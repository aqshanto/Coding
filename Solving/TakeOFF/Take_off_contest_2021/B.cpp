#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=0 && n<=15){
        cout<<"Troposphere"<<endl;
    }else if(n>=16 && n<=50){
        cout<<"Stratosphere"<<endl;
    }else if(n>=51 && n<=85){
        cout<<"Mesosphere"<<endl;
    }else if(n>=86 && n<=500){
        cout<<"Thermosphere"<<endl;
    }else{
        cout<<"Exosphere"<<endl;
    }
    return 0;
}