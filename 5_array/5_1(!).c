#include<stdio.h>

int main() {
    int n, x, max = -1000001, min = 1000001;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(x > max) {
            max = x;
        }
        if(x < min) {
            min = x;
        }
    }
    printf("%d %d\n", min, max);

    return 0;
}