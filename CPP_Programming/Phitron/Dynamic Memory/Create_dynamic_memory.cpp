#include<bits/stdc++.h>

using namespace std;

int main(){
    //int x=10;   //static variable

    int *p = new int;   //dynamic varriable
    *p=10;
    cout<<*p<<endl;

    float *a= new float;
    *a = 3.141658;
    cout<<*a<<endl;
    return 0;
}