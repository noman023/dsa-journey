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
    if (l.eng_marks == r.eng_marks)
    {
        if (l.math_marks == r.math_marks)
        {
            return l.id < r.id;
        }
        else
        {
            return l.math_marks > r.math_marks;
        }
    }
    else
    {
        return l.eng_marks > r.eng_marks;
    }
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