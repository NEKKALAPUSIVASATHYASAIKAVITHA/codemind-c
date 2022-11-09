#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int n) {
	int rev = 0;
	while (n > rev) {
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == n or rev / 10 == n;
}
int main() {
	int n;
	cin >> n;
	int l = n - 1, r = n + 1;
	while (1) {
		if (ispalindrome(l) and ispalindrome(r)) {
			cout << l << " " << r;
			break;
		}
		else if (ispalindrome(l)) {
			cout << l;
			break;
		}
		else if (ispalindrome(r)) {
			cout << r;
			break;
		}
		l--;
		r++;
	}
}
