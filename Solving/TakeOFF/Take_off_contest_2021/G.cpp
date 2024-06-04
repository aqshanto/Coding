#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,A,B;
        cin>>N>>A>>B;
        int Arr[N],A1[N],B1[N];
        for(int i=0;i<N;i++){
            cin>>Arr[i];
            A1[i]=Arr[i]*A;
            B1[i]=Arr[i]*B;
        }
        sort(A1,A1+N);
        sort(B1,B1+N,greater<int>());
        if(A1[N-1]>B1[0]){
            cout<<A1[N-1]-B1[N-1]<<endl;
        }else if(A1[N-1]<B1[0]){
            cout<<B1[0]-A1[0]<<endl;
        }
    }
}