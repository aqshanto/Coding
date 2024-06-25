//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

//Method 1: using vector functions and got TLE :(

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n,q;
//     cin>>n>>q;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<q;i++){
//         int a;
//         cin>>a;
//         auto it=find(v.begin(),v.end(),a);
//         if(it!=v.end()){
//             cout<<"found"<<endl;
//         }else{
//             cout<<"not found"<<endl;
//         }
//     }
//     return 0;
// }


//Method 2: using binary search

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<q;i++){
        int a;
        cin>>a;
        
        int s=0,e=n,flag=0;
        while(s<e){
            int mid=(s+e)/2;
            if(v[mid]==a){
                cout<<"found"<<endl;
                flag=1;
                break;
            }else if(v[mid]>a){
                e=mid-1;
            }else if(v[mid]<a){
                s=mid+1;
            }
        }
        if(flag==0){
            cout<<"not found"<<endl;
        }
    }
    return 0;
}