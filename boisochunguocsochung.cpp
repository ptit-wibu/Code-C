#include<stdio.h>

void swap(long long * a, long long * b) {
    if ( * a > * b) {
        long long tmp = * a;
        * a = * b;
        * b = tmp;
    }
}
void process() {
    long long a, b, UCLN, BCNN;
    scanf("%lld%lld", & a, & b);
    swap( & a, & b);
    for (int i = a; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            UCLN = i;
            break;
        }
    }
    BCNN = (a * b) / UCLN;
    printf("%lld %lld", BCNN, UCLN);
}

int main() {
    int n;
    scanf("%d", & n);
    while (n--) {
        process();
        printf("\n");
    }
    return 0;
}
