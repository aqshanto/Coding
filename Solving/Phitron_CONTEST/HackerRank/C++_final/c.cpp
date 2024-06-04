#include <bits/stdc++.h>

using namespace std;

class student{
public:
    string nm, s;
    int cls, id;
};

int main(){
    int N;

    cin >> N;

    student st[N];

    for (int j=0;j<N;j++){
        cin >> st[j].nm >> st[j].cls >> st[j].s >> st[j].id;
    }
    string ar[N];
    for (int i=0;i<N;i++){
        ar[i] = st[i].s;
    }
    for (int k=0;k<N;k++){
        st[k].s = ar[N-k-1];
    }
    for (int h=0;h<N;h++){
        cout << st[h].nm << " " << st[h].cls << " " << st[h].s << " " << st[h].id << endl;
    }
    return 0;
}