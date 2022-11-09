#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sq = n * n;
	int di = 0;
	while(sq) {
		di += sq%10;
		sq/=10;
	}
	cout << (di == n ? "Neon Number" : "Not Neon Number") ;
}
