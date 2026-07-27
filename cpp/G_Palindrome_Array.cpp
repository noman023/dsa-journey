#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool is_palindrome = true;
    for(int j=0, k=n-1; j<k; j++, k--){
        if(arr[j] != arr[k]){
            is_palindrome = false;
            break;
        }
    }

    cout << (is_palindrome ? "YES": "NO") << endl;

    return 0;
}
