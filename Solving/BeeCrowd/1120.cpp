#include<bits/stdc++.h>

using namespace std;

int main(){
    char digit;
    string num;
    while(1){
        cin>>digit>>num;
        if(digit=='0' && num=="0")
            break;
        char newarr[110];
        int j=0;
        for(int i=0;i<num.size();i++){
            if(num[i]!=digit){
                newarr[j]=num[i];
                j++;
            }
        }
        newarr[j]='\0';
        int k=0;
        while(newarr[k]=='0'){
            k++;
        }
        for(int i=k;i<j;i++){
            cout<<newarr[i];
        }
        cout<<endl;
    }
    return 0;
}