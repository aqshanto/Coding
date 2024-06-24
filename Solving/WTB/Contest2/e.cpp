#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        int arr[n];
        int check[101]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            check[arr[i]]++;
        }
        int sum=0;
        for(int i=1;i<=100;i++){
            if(check[i]==1){
                sum++;
            }else if(check[i]>=2){
                if(check[i]<c){
                    sum+=check[i];
                }else if(check[i]>=c){
                    sum+=c;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}