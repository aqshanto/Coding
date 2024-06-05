#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,A,B;
        cin>>N>>A>>B;
        vector<pair<int ,int>>v1,v2;
        for(int i=0;i<N;i++){
            int num;
            cin>>num;
            v1.push_back({num*A,i});
            v2.push_back({num*B,i});
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        // for(int i=0;i<N;i++){
        //     cout<<v1[i].first<<' '<<v1[i].second<<endl;
        // }
        // for(int i=0;i<N;i++){
        //     cout<<v2[i].first<<' '<<v2[i].second<<endl;
        // }

        int s=0,e=N-1;
        if(v1[e].first>v2[e].first){
            while(s<e){
                if(v1[e].second!=v2[s].second){
                    cout<<v1[e].first-v2[s].first<<endl;
                    break;
                }else{
                    if(v1[e].first-v1[e-1].first <v2[s+1].first-v2[s].first){
                        s++;
                    }else{
                        e--;
                    }
                }
            }
        }else if(v1[e].first<v2[e].first){
            while(s<e){
                if(v2[e].second!=v1[s].second){
                    cout<<v2[e].first-v1[s].first<<endl;
                    break;
                }else{
                    if(v2[e].first-v2[e-1].first <v1[s+1].first-v1[s].first){
                        s++;
                    }else{
                        e--;
                    }
                }
            }
        }
    }
}