#include <bits/stdc++.h>

using namespace std;

class student{
public:
    string name, s;
    int cls, id;
};

int main(){
    int N;

    cin >> N;

    student str[N];

    for (int j=0;j<N;j++){
        cin >> str[j].name >> str[j].cls >> str[j].s >> str[j].id;
    }
    string arr[N];

    for (int i=0;i<N;i++){
        arr[i] = str[i].s;
    }

    for (int k=0;k<N;k++){
        str[k].s = arr[N-k-1];
    }

    for (int h=0;h<N;h++){
        cout << str[h].name << " " << str[h].cls << " " << str[h].s << " " << str[h].id << endl;
    }

    return 0;
}