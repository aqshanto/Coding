#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    while (cin.getline(str, 100001)){
        int ln = strlen(str);
        sort(str, str + ln);
        for (int i = 0; i < ln; i++){
            if (str[i] != ' '){
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}