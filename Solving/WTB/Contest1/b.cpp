#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n*n];
    for(int i=0;i<n*n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+(n*n));
    int main_dig_sum=0,second_dig_sum=0;
    if(n%2==0){
        for(int i=0;i<n;i++){
            main_dig_sum+=arr[(n*n)-1-i];
            second_dig_sum+=arr[i];
        }
    }else if(n%2!=0){
        for(int i=0;i<n-1;i++){
            main_dig_sum+=arr[(n*n)-1-i];
            second_dig_sum+=arr[i];
        }
    }
    cout<<abs(main_dig_sum-second_dig_sum)<<endl;
    return 0;
}