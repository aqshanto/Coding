#include <bits/stdc++.h>

using namespace std;

class student{
public:
    int id, mark;
    char sec, name[101];
};

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        student ar[3];
        cin >> ar[0].id >> ar[0].name >> ar[0].sec >> ar[0].mark;
        cin >> ar[1].id >> ar[1].name >> ar[1].sec >> ar[1].mark;
        cin >> ar[2].id >> ar[2].name >> ar[2].sec >> ar[2].mark;
        int m = max({ar[0].mark, ar[1].mark, ar[2].mark});
        for (int i = 0; i < 3; i++){
            if (m == ar[i].mark){
                cout << ar[i].id << " " << ar[i].name << " " << ar[i].sec << " " << ar[i].mark << endl;
                break;
            }
        }
    }
    return 0;
}