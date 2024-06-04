#include<bits/stdc++.h>

using namespace std;
class student{
public:
    string nm, s;
    int cls, id, math_marks, eng_marks, sum;
};

bool cmp(student a, student b)
{
    if (a.sum == b.sum){
        return (a.id < b.id);
    }
    else{
        return (a.sum > b.sum);
    }
}

int main(){

    int n;
    cin >> n;
    student str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i].nm >> str[i].cls >> str[i].s >> str[i].id >> str[i].math_marks >> str[i].eng_marks;
        str[i].sum = str[i].math_marks + str[i].eng_marks;
    }
    sort(str, str + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << str[i].nm << " " << str[i].cls << " " << str[i].s << " " << str[i].id << " " << str[i].math_marks << " " << str[i].eng_marks << endl;
    }
    return 0;
}