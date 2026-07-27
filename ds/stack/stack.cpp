#include <bits/stdc++.h>
using namespace std;

class MyStack
{
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    };

    void pop()
    {
        v.pop_back();
    };

    int top()
    {
        return v.back();
    };
};

int main()
{

    MyStack st;
    st.push(12);
    st.push(18);
    st.push(78);

    cout << st.top();
    st.pop();
    cout << st.top();
    return 0;
}