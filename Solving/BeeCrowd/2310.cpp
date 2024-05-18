#include<bits/stdc++.h>

using namespace std;

int main(){
    double player,s1,b1,a1,s2,b2,a2,succ_service=0.0,succ_block=0.0,succ_attack=0.0,total_service=0.0,total_block=0.0,total_attack=0.0;
    cin>>player;
    string name;
    for(int i=0;i<player;i++){
        cin>>name;
        cin>>s1>>b1>>a1;
        total_service+=s1;
        total_block+=b1;
        total_attack+=a1;
        cin>>s2>>b2>>a2;
        succ_service+=s2;
        succ_block+=b2;
        succ_attack+=a2;
    }

    cout<<fixed<<setprecision(2);
    cout<<"Pontos de Saque: "<<((succ_service/total_service)*100)<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<((succ_block/total_block)*100)<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<((succ_attack/total_attack)*100)<<" %."<<endl;
    return 0;
}