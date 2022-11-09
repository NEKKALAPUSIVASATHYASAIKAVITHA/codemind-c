#include<bits/stdc++.h>
using namespace std;
int cnt(int n) {
	int count = 0;
	for(int i = 1; i <= n; i++) {
		if(n%i == 0) count++;
	}
	return count;
}
int main() {
	int n;
	cin >> n;
	int count = 0;
	for(int i = 1; i <= n; i++) {
		if(cnt(i) == 9) {
			cout << i << " ";
			count++;
		}
	}
	cout << "
Total="<< count;
}
