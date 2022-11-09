#include<bits/stdc++.h>
using namespace std;
int reverse(int n) {
    int rev = 0;
    while(n) {
        rev = rev*10  + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    int n;
    cin >> n;
    int sq = n * n;
    int rev = reverse(n);
    int res = rev * rev;
    if(sq == reverse(res)) cout << "True";
    else cout << "False";
}