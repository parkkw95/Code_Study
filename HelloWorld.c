#include<stdio.h>

int main() {
    int A, B;
    int o1, o2, o3, r;

    scanf("%d", &A);
    scanf("%d", &B);
    o1 =  A * ((B % 100) % 10);
    o2 = A * ((B % 100) / 10);
    o3 = A * (B / 100);
    r = A * B; 

    printf("%d\n", o1);
    printf("%d\n", o2);
    printf("%d\n", o3);
    printf("%d", r);

    return 0;
}