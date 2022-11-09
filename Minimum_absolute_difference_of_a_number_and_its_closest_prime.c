#include<bits/stdc++.h>
using namespace std;
bool isprime(int n) {
	if (n == 1) return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return false;
	return true;
}
int main() {
	int n;
	cin >> n;
	int l = n, r = n;
	while(1) {
		if(isprime(l)) {cout << abs(l - n);return 0;}
		else if(isprime(r)) {cout << abs(r - n); return 0;}
		l--;
		r++;
	}
	
}
