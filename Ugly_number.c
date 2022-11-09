#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	if (n == 1) cout << "Ugly Number";
	else {
		while (n % 2 == 0) {
			n /= 2;
		}
		while (n % 3 == 0) {
			n /= 3;
		}
		while (n % 5 == 0) {
			n /= 5;
		}
		if (n != 1) cout <<  "Not Ugly Number";
		else cout << "Ugly Number";
	}
}
