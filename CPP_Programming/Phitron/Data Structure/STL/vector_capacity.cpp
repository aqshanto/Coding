#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    /*
    v.size(), v.maxsize(), v.capacity()
        time complexity : O(1)

    capacity always be double if the size of the vector is greater than the previous capacity of that vector
    */

    // cout<<v.max_size()<<endl;
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;   
    // v.push_back(20);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(30);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(22);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;


    /*
    v.clear()
    clear function main clear the value but don't delete from the memory
        time complexity : O(n)
    */

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // cout<<v.size()<<endl;
    // v.clear();
    // cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<' ';
    // }cout<<endl;
    // cout<<v[3]<<endl;


    /*
    v.empty()
    empty function returns true or false if the vector is empty or not
    */

    // if(v.empty()){
    //     cout<<"EMPTY"<<endl;
    // }else{
    //     cout<<"NOT EMPTY"<<endl;
    // }
    // v.push_back(10);
    // if(v.empty()){
    //     cout<<"EMPTY"<<endl;
    // }else{
    //     cout<<"NOT EMPTY"<<endl;
    // }


    /*
    v.resize()
    resize is a function of increasing a vector size or decreasing a vector size
        time complexity : O(K) here, k is the difference of previous size and new size
    */

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }cout<<endl;
    v.resize(2);// removing all value except first 2 values
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }cout<<endl;

    // v.resize(7);// now adding extra 5 size here if we declare the value then it'll store 0
    // cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<' ';
    // }cout<<endl;

    v.resize(7,99);// now adding extra 5 size with a value of 99
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }cout<<endl;
    return 0;
}