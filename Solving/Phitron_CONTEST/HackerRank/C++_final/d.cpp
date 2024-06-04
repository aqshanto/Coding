#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string nm, s;
    int cls, id, math_marks, eng_marks, sum;
};
bool cmp(student a, student b)
{
    if (a.sum == b.sum)
    {
        return (a.id < b.id);
    }
    else
        return (a.sum > b.sum);
}
int main()
{
    int N;
    cin >> N;
    student st[N];
    for (int i = 0; i < N; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
        st[i].sum = st[i].math_marks + st[i].eng_marks;
    }
    sort(st, st + N, cmp);
    for (int i = 0; i < N; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }
    return 0;
}