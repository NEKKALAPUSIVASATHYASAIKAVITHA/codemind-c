//https://www.thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=eDdqYzJidml5cGFLMEhQNThJMHowdz09&Pid=OWttek00VG8wOGVLRDV2aDRUK0Zudz09&Course=bCt3WlAvSHJ0UFZNQ1lYanRHWm5lQT09&Technology=VytvRXpaWXBDM1pCeDVxWTd6QkQzZz09&Topic=SXVxYURxU2Y1N2VDd2E3d1hpVExMZz09
#include<bits/stdc++.h>
using namespace std; 
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, a, b, k;
        cin >> n >> a >> b >> k;
        int solve = n/a + n/b - n/(a*b);
        if(solve >= k) cout << "Win" << endl;
        else cout << "Lose
";
    } 
}