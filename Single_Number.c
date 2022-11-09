//https://www.thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=eDdqYzJidml5cGFLMEhQNThJMHowdz09&Pid=cEpnSndtRS9BZkZybTcwVlcyMnVIZz09&Course=bCt3WlAvSHJ0UFZNQ1lYanRHWm5lQT09&Technology=VytvRXpaWXBDM1pCeDVxWTd6QkQzZz09&Topic=SXVxYURxU2Y1N2VDd2E3d1hpVExMZz09
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i = 0 ; i < n; i++) cin >> v[i];
	int ans = v[0];
	for(int i = 1; i < n; i++) {
		ans ^= v[i];
	}
	cout << ans;
}