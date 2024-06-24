#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int i=0;
        while(i<n){
            char check=str[i];
            ++i;
            while(1){
                if(check==str[i]){
                    cout<<check;
                    ++i;
                    break;
                }else{
                    ++i;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}