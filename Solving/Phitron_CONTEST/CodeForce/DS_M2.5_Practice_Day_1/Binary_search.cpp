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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<q;i++){
        int num;
        cin>>num;
        int s=0,e=n;
        bool flag =false;
        while(s<=e){
            int mid=(s+e)/2;
            if(a[mid]==num){
                flag=true;
                break;
            }else if(a[mid]>num){
                e=mid-1;
            }else if(a[mid]<num){
                s=mid+1;
            }
        }
        if(flag==false){
            cout<<"not found"<<endl;
        }else if(flag==true){
            cout<<"found"<<endl;
        }
    }
    return 0;
}