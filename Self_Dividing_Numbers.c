#include<bits/stdc++.h>
using namespace std;
bool div(int n) {
    int tmp = n;
    while(tmp) {
        int r = tmp % 10;
        if(r == 0 or n%r != 0) return false;
        tmp /= 10;
    }
    return true;
}
int main() {
    int a,b;
    cin >> a >> b;
    for(int i = a; i<=b; i++) {
        if(div(i)) cout << i << " ";
    }
}