#include<stdio.h>

int main() {
    int h, m;
    h >= 0 && h <= 23;
    m >= 0 && m <= 59;

    scanf("%d %d", &h, &m);

    if(m > 45) {
        printf("%d %d", h, m - 45);
    }

    else if(m < 45) {
        h = h - 1;
        if(h < 0) {
            h = h + 24;
        }
        printf("%d %d", h, (m + 15));
    }

    else {
        printf("%d %d", h, m - 45);
    }

    return 0;
}