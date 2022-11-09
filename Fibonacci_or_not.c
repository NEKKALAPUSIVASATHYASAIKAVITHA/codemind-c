#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >>n;
    int n1 = 0, n2 = 1;
    while(n > n2) {
        int n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    cout << (n == n2 ? "True" : "False");
}