#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	while (n > 9) {
		int sum = 0;
		while (n) {
			sum += pow(n % 10, 2);
			n /= 10;
		}
		n = sum;
	}
	if (n == 1 or n == 7) cout << "True";
	else cout << "False";
}
