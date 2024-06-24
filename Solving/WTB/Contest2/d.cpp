#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        int length1 = str1.size();
        int length2 = str2.size();
        if(str1[length1-1]=='L' && (str2[length2-1]=='M' || str2[length2-1]=='S')){
            cout<<">"<<endl;
        }else if(str1[length1-1]=='S' && (str2[length2-1]=='M' || str2[length2-1]=='L')){
            cout<<"<"<<endl;
        }else if(str1[length1-1]=='M' && str2[length2-1]=='S'){
            cout<<">"<<endl;
        }else if(str1[length1-1]=='M' && str2[length2-1]=='L'){
            cout<<"<"<<endl;
        }else if(str1[length1-1]==str2[length2-1] && str1[length1-1]=='L'){
            if(length1==length2){
                cout<<"="<<endl;
            }else if(length1>length2){
                cout<<">"<<endl;
            }else if(length1<length2){
                cout<<"<"<<endl;
            }
        }else if(str1[length1-1]==str2[length2-1] && str1[length1-1]=='S'){
            if(length1==length2){
                cout<<"="<<endl;
            }else if(length1>length2){
                cout<<"<"<<endl;
            }else if(length1<length2){
                cout<<">"<<endl;
            }
        }else if(str1[length1-1]=='M' && str2[length2-1]=='M'){
            cout<<"="<<endl;
        }
    }
    return 0;
}