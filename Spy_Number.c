#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int s = 0, p = 1;
	while(n) {
		int r = n % 10;
		s += r;
		p *= r;
		n /= 10;
	}
	cout << (s == p? "Spy Number": "Not Spy Number");
}
