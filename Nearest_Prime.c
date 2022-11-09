#include<bits/stdc++.h>
using namespace std;
bool isprime(int n) {
	if (n == 1) return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return false;
	return true;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int l = n, r = n;
		while (1) {
			// if (isprime(l) and isprime(r)) {
			// 	cout << l << " " << r << endl;
			// 	break;
			// }
			if (isprime(l)) {
				cout << l << endl;
				break;
			}
			else if (isprime(r)) {
				cout << r << endl;
				break;
			}
			l--;
			r++;
		}
	}
}
