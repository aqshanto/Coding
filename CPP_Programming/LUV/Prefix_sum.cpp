/*
Given a array a of N integers. Given Q queries
and in each query given L and R print sum of 
array elements from index L to R(L, R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <=10^9
1 <= Q <= 10^5 
1 <= L, R <=N

sample input
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6

sample output
8
19
28
21

*/

//with time complexity:

            // #include<bits/stdc++.h>
            // using namespace std;
            const int N=1e5+10;
            int a[N];

            // int main(){
            //     int n;
            //     cin>>n;
            //     for(int i=1;i<=n;i++){
            //         cin>>a[i];
            //     }
            //     int q;
            //     cin>>q;
            //     while(q--){
            //         int l,r;
            //         cin>>l>>r;
            //         long long int sum=0;
            //         for(int i=l;i<=r;i++){
            //             sum+=a[i];
            //         }
            //         cout<<sum<<endl;
            //     }
            //     return 0;
            // }

// O(N) + O(Q*N) = N^2 = 10^10
// O(N) + O(N) 

//without time complexity:

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
int pf[N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l]<<endl;
    }
    return 0;
}

//O(N) +O(Q) = 10^5