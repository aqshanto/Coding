#include <bits/stdc++.h>

using namespace std;

int main(){
    int test;
    string Str, word;
    cin >> test;
    while(test--){
        cin >> Str >> word;
        while (Str.find(word)!=-1){
            Str.replace(Str.find(word), word.size(), "#");
        }
        cout << Str << endl;
    }
    return 0;
}