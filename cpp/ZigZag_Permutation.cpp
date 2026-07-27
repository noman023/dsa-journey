#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1, j = n; i <= j; i++, j--)
    {
        if(i != j){
            cout << i << " " << j;
        }else{
            cout << i;
        }

        cout << " ";

    }    
    
    return 0;
}