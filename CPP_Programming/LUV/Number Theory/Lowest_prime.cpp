#include<bits/stdc++.h>

using namespace std;

int N=1e7+10;

int main(){
    vector <bool> isPrime(N,1);
    isPrime[0]=isPrime[1]=false;
    for(int i=0;i<N;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }

    vector <int> lowestPrime(N,0),higestPrime(N,0);

    return 0;
}