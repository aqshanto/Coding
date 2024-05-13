#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1= "My Name is Shanto";

    s1.erase(2,3);//stringname.erase(form which index, how many character to delete);
    cout<<s1<<endl;
}