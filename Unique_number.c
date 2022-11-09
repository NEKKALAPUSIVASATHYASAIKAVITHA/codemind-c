#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>freq(10,0);
	while(n) {
		int rm = n % 10;
		if(freq[rm] == 1) {
			cout << "Not Unique Number";
			exit(0);
		}
		freq[rm]++;
		n /=10;
	}
	cout << "Unique Number";
}
