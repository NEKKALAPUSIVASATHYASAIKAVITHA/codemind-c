#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int f = 0, s = 1;
	while(n > s) {
	    int t = f + s;
		f = s;
		s = t;
	}
	if(abs(f - n) == abs(s - n)) cout << f << " " << s;
	else if(abs(f - n) > abs(s - n)) cout << s;
	else cout << f;
}
