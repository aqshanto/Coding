#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int minimum=min(a,b);
    int maximum=max(a,b);
    cout<<minimum<<" "<<maximum<<endl;

    minimum = min({a,b,c,d,e,f});
    maximum = max({a,b,c,d,e,f});
    cout<<minimum<<" "<<maximum<<endl;
    
    cout<<"a = " <<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"a = " <<a<<" b = "<<b<<endl;
    return 0;
}