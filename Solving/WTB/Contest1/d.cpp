#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ar[n],freq[101]={0};
        for(int j=0;j<n;j++){
            cin>>ar[j];
            freq[ar[j]]++;
        }
        int max=0,pos=0;
        for(int k=1;k<101;k++){
            if(freq[k]>max){
                max=freq[k];
                pos=k;
            }
        }
        cout<<n-max<<endl;
    }
    return 0;
}