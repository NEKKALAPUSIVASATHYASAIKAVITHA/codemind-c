#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        int rev = 0, tmp = n;
        while(tmp) {
            rev = rev*10 + tmp % 10;
            tmp /= 10;
        }
        cout << (n == rev ? "True
" : "False
");
    }
}