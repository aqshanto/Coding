#include<bits/stdc++.h>

using namespace std;

void ArrPrint(int arr[], int n, int i){
    //base case
    if(i==n)
        return ;
    cout<<arr[i]<<endl;
    ArrPrint(arr,n,i+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ArrPrint(arr,n,0);
    return 0;
}