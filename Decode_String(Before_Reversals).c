//https://www.thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=eDdqYzJidml5cGFLMEhQNThJMHowdz09&Pid=T0ZDNVFwbmhwWk1lVGFlVndmNHVnUT09&Course=bCt3WlAvSHJ0UFZNQ1lYanRHWm5lQT09&Technology=VytvRXpaWXBDM1pCeDVxWTd6QkQzZz09&Topic=SXVxYURxU2Y1N2VDd2E3d1hpVExMZz09
#include<bits/stdc++.h>
using namespace std;
void de(string &s, int k) {
	if (k == 1) return;
	int left = 0, right = k - 1;
	while (left < right) {
		swap(s[left++], s[right--]);
	}
	de(s, k - 1);
}
int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n, k;
		cin >> n >> k;
		string s; cin >> s;
		de(s, k);
		cout << s << "
";
	}
}
