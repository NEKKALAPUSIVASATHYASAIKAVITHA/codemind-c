#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int divi = 0;
    for(int i = 1; i < n; i++) {
        if(n%i==0) divi+= i;
    }
    if(n == divi) printf("True");
    else printf("False");
}