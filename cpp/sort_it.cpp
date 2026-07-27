#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool compare(Student l, Student r)
{
    int total_l = l.math_marks + l.eng_marks;
    int total_r = r.math_marks + r.eng_marks;

    if (total_l == total_r)
    {
        return l.id < r.id;
    }

    return total_l > total_r;
}

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id >> ar[i].math_marks >> ar[i].eng_marks;
    }

    sort(ar, ar + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << " " << ar[i].math_marks << " " << ar[i].eng_marks << endl;
    }

    return 0;
}