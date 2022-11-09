//https://www.thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=eDdqYzJidml5cGFLMEhQNThJMHowdz09&Pid=dG5yc3prb0IzRFp5SGN2ZXhBTGNBQT09&Course=bCt3WlAvSHJ0UFZNQ1lYanRHWm5lQT09&Technology=VytvRXpaWXBDM1pCeDVxWTd6QkQzZz09&Topic=SXVxYURxU2Y1N2VDd2E3d1hpVExMZz09
#include<stdio.h>
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b)/ gcd(a, b);
}
int main() {
    int n;
    scanf("%d",&n);
    int g = 1;
    for(int i = 0; i < n; i++) {
        int tmp;
        scanf("%d",&tmp);
        g = lcm(g,tmp);
    }
    printf("%d",g);
}