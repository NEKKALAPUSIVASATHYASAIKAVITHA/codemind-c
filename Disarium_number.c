#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int tmp = n;
    int digit = (int)log10(n) + 1;
    int ans = 0;
    while(n) {
        ans += pow(n%10,digit--);
        n/=10;
    }
    if(ans == tmp) cout << "True";
    else cout << "False";
}