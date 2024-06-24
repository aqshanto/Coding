#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=5;
    int arr[n]={27,54,65,23,67};        //O(N^2)
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){               //O(N)
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}