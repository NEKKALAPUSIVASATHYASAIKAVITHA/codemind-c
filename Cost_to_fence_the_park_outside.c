//https://www.thecodemind.io/app/discription.php?pageCategory=c3pzTm1NaHFsYWVCeFpGMVpkTDloZz09&Tid=eDdqYzJidml5cGFLMEhQNThJMHowdz09&Pid=RHhFVUZVRjBBbElIYno3ZUJQNjhLZz09&Course=bCt3WlAvSHJ0UFZNQ1lYanRHWm5lQT09&Technology=VytvRXpaWXBDM1pCeDVxWTd6QkQzZz09&Topic=SXVxYURxU2Y1N2VDd2E3d1hpVExMZz09
#include<stdio.h>
int main() {
    int l, b, w, c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int a = l * b;
    int d = (l + 2*w) * (b + 2*w);
    printf("%d",(d - a)*c);
    
}