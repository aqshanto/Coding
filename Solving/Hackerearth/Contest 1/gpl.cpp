#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int size;
		long long int total=0;
        cin>>size;
        string str;
        cin>>str;
        reverse(str.begin(),str.end());
        for(int j=0;j<size;j++){
            if(str[j]=='1'){
                long long int pw=pow(2,j);
                total=total+pw;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}