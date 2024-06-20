#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    cin >> input;

    string konamiCode ="UUDDLRLRBA";
    int codeLength = konamiCode.length();
    int inputLength = input.length();
    int count = 0;

    for (int i = 0; i <= inputLength - codeLength; ++i){
        if (input.substr(i, codeLength)==konamiCode){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
