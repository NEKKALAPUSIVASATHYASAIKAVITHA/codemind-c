#include<bits/stdc++.h>
using namespace std; 
int main() {
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(rev == temp) cout << "True";
    else cout << "False";
}