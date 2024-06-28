#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,team1=0,team2=0;
        string str,str1,str2;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>str;
            if(i==0){
                str1=str;
                team1++;
            }else{
                if(str==str1){
                    team1++;
                }else{
                    str2=str;
                    team2++;
                }
            }
        }
        // cout<<team1<<" "<<team2<<endl;
        if(team1==team2){
            cout<<"Draw"<<endl;
        }else if(team1>team2){
            cout<<str1<<endl;
        }else if(team2>team1){
            cout<<str2<<endl;
        }

    }
    return 0;
}