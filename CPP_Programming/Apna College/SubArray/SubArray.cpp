#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cin>>size;
    int Arr[size];

    for(int i=0;i<size;i++){
        cin>>Arr[i];
    }

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<Arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}