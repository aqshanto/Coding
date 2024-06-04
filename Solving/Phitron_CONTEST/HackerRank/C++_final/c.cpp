#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string nm, s;
    int cls, id;
};
int main()
{
    int N;
    cin >> N;
    student st[N];
    for (int i = 0; i < N; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;
    }
    string ar[N];
    for (int i = 0; i < N; i++)
    {
        ar[i] = st[i].s;
    }
    for (int i = 0; i < N; i++)
    {
        st[i].s = ar[N - i - 1];
    }
    for (int i = 0; i < N; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << endl;
    }
    return 0;
}