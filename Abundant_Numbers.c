#include<bits/stdc++.h>
using namespace std; 
int main() {
    int n;
    cin >> n;
    int r = 0;
    for(int i = 1; i < n; i++) {
        if(n%i == 0) r += i;
    }
    if(r >= n) cout << "True";
    else cout << "False";
}