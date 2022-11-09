#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a = 0, b = 1, c = a + b;
	while (c < n) {
		a = b;
		b = c;
		c = a + b;
	}
	if (n - b == c - n) cout << b << ' ' << c;
	else if (n - b > c - n) cout << c;
	else cout << b;
}
