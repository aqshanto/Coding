#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    while(1){
        cin>>a>>b;
        if(a==0 && b==0){
            break;
        }
        int a1[a],a2[b],b1[a],b2[b],k=0,l=0;
        for(int i=0;i<a;i++){
            cin>>a1[i];
        }
        for(int i=0;i<b;i++){
            cin>>a2[i];
        }
        for(int i=0;i<a;i++){
            int check=0;
            for(int j=0;j<b;j++){
                if(a2[i]==a1[j]){
                    check=1;
                    break;
                }
            }
            if(check==0){
                b1[k]=a1[i];
                k++;
            }
        }
        for(int i=0;i<b;i++){
            int check=0;
            for(int j=0;j<a;j++){
                if(a2[i]==a1[j]){
                    check=1;
                    break;
                }
            }
            if(check==0){
                b2[l]=a2[i];
                l++;
            }
        }
        for(int i=0;i<k;i++){
            cout<<b1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<l;i++){
            cout<<b2[i]<<" ";
        }
        cout<<endl;
        if(l<k){
            cout<<l<<endl;
        }else{
            cout<<k<<endl;
        }
    }
    return 0;
}