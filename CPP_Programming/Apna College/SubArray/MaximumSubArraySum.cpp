#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }

    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=Arr[k];
            }
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum<<endl;
}