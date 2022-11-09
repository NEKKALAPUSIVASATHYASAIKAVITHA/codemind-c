#include<bits/stdc++.h>
using namespace std;
int reverse(int n) {
    int rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    int n;
    cin >> n;
    int l = n - 1, r = n + 1;
    while(1) {
        int revL = reverse(l);
        int revR = reverse(r);
        if(revL == l and revR == r) {
            cout << l << " " << r;
            break;
        }
        else if(revL == l) {
            cout << l;
            break;
        }
        else if(revR == r) {
            cout << r;
            break;
        }
        l--;
        r++;
    } 
}