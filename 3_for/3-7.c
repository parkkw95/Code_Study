#include<stdio.h>

int main() {
    int a, b, t, s;

    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        s = a + b;
        printf("Case #%d: %d\n", i, s);
    }

    return 0;
}