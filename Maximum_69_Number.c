#include<bits/stdc++.h>
using namespace std;
int main() {
	string n;
	cin >> n;
	for(int i = 0; i < n.size(); i++) {
		if(n[i]=='6') {
			n[i] = '9';
			break;
		}
	}
	cout << n;

}
