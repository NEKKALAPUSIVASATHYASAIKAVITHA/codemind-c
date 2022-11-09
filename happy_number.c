#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n > 9) {
        int r = 0;
        while(n) {
            int rem = n % 10;
            n /= 10;
            r += rem* rem;
        }
        n = r;
    }
    if(n==1 or n == 7) cout << "True";
    else cout << "False";
}