#include<bits/stdc++.h>
using namespace std;
void bin(long n, int size) {
	long i;
	for (i = 1 << size - 1 ; i > 0; i = i / 2) {
		if ((n & i) != 0)
			cout << "1";
		else
			cout << "0";
	}
}
int main() {
	int n;
	cin >> n;
	const int a = n;
	int ni = pow(2,n);
	for (int i = 0; i < ni; i++) {
		bin(i, n);
		cout <<  "
";
	}
}
