//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
#include<stdio.h>

int main() {
    unsigned int l1, r1, l2, r2;
    scanf("%u %u %u %u", &l1, &r1, &l2, &r2);

    if (l1<=r1 && l2<=r2 && r1>=l2) {
        int min_r = r1<=r2?r1:r2;
        int max_l = l1>=l2?l1:l2;
        printf("%u %u", max_l, min_r);
    } else {
        printf("-1\n");
    }
    return 0;
}

