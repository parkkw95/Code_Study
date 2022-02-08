#include <stdio.h>

int han(int n);

int main() {
    int num, result;

    scanf("%d", &num);
    result = han(num);
    printf("%d\n", result);
}

int han(int n) {
    int i = 0, count = 0, h, t, o;
    if(n < 100) {
        return n;
    }
    else {
        for(i = 100; i <= n; i++) {
            h = i / 100;
            t = (i % 100) / 10;
            o = (i % 100) % 10;
            if((h - t) == (t - o)) {
                count++;
            }
        }
        return(99 + count);
    }
}