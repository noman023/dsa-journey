#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100001];

    while (cin.getline(s, 100001))
    {
        string str(s);
        
        str.erase(remove(str.begin(), str.end(), ' '), str.end());

        sort(str.begin(), str.end());

        cout << str << endl;
    }
    
    return 0;
}