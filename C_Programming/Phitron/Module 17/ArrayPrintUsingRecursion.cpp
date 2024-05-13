#include<bits/stdc++.h>

using namespace std;

void ArrPrint(int arr[], int n, int i){
    for(int j=i;j>=0;j--){
        cout<<arr[j]<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ArrPrint(arr,n,n-1);
    return 0;
}