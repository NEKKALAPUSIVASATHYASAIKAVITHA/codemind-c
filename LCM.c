#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	return b==0 ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
	return a*b/ gcd(a, b);
}
int main() {
	int n, m;
	cin >> n >> m;
	cout << lcm(n, m);
}
