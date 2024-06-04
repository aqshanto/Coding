#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int N, S;
        cin >> N >> S;
        int A[N];
        for (int j = 0; j < N; j++){
            cin >> A[j];
        }
        int yes = 0;
        for (int j = 0; j < N - 2; j++){
            for (int k = j + 1; k < N - 1; k++){
                for (int l = k + 1; l < N; l++){
                    if (A[j] + A[k] + A[l] == S){
                        yes = 1;
                        break;
                    }
                }
            }
        }
        if (yes == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}