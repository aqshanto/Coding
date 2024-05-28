#include<bits/stdc++.h>

using namespace std;

int main(){
    // //String Input output

    // string str="Hello";
    // cout<<str<<endl;
    // string str0,stro;
    // cin>>str0>>stro;
    // cout<<str0<<" "<<stro<<endl;

    // //string concetenation

    // string str1="Hello";
    // string str2="World";
    // cout<<str1+str2<<endl;
    // cout<<str1+" "+str2<<endl;

    // //String Equat

    // if(str1==str2){
    //     cout<<"Equal"<<endl;
    // }else{
    //     cout<<"Not equal"<<endl;
    // }

    // //string indexing

    // string ch= "shanto";
    // cout<<ch[3]<<endl;
    // ch[0]='a';
    // cout<<ch<<endl;

    // int string_size= ch.size();
    // for(int i=0;i<string_size;i++){
    //     cout<<ch[i]<<endl;
    // }

    //getline function

    string str1,str2;
    cin>>str1>>str2;
    cout<<str1<<" "<<str2<<endl;
    string str3;
    cin.ignore();
    getline(cin,str3);
    cout<<str3<<endl;

    
    return 0;
}