#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <pair<int,int>>v;
    int n,k;
    cin>>n>>k;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
        v.push_back({num[i],i}); 
    }
    sort(v.begin(),v.end());
    int s=0,e=n-1;
    while(s<e){
        int sum = v[s].first+v[e].first;
        if(sum==k){
            cout<<"["<<v[s].second<< " , " <<v[e].second<<"]"<<endl;
            break;
        }else if(sum>k)e--;
        else s++;
    }
    return 0;
}