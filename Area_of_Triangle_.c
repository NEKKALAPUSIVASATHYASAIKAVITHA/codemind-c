//https://www.thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=eDdqYzJidml5cGFLMEhQNThJMHowdz09&Pid=WTNLQk4rV2VFcStRdjVFWUhDZ2xNQT09&Course=bCt3WlAvSHJ0UFZNQ1lYanRHWm5lQT09&Technology=VytvRXpaWXBDM1pCeDVxWTd6QkQzZz09&Topic=SXVxYURxU2Y1N2VDd2E3d1hpVExMZz09
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c; cin>> a >> b >> c;
	float s = (float)(a+b+c)/2;
	cout << fixed << setprecision(2) << sqrt(s*(s-a)*(s-b)*(s-c));
}
