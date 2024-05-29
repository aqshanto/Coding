#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=10;
    int arr[n];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}