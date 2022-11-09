#include<bits/stdc++.h>
using namespace std;
int fac(int n) {
	if(n <= 1) return 1;
	return n * fac(n - 1);
}
int main() {
	int n;
	cin >>n;
	int tmp = n;
	int ans = 0;
	while(n) {
		ans += fac(n%10);
		n /= 10;
	}
	if(ans == tmp) cout << "The number " << ans << " is a strong number";
	else cout << "The number " << tmp << " is not a strong number";
} 
