#include<stdio.h>

int main() {
    int n, max = -101, index;
    int a[9];

    for(int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
        if(a[i] > max) {
            max = a[i];
            index = i;  //index를 뒤서 최댓값이 존재하는 배열의 위치를 대입
        }
    }
    printf("%d\n", max);
    printf("%d\n", index + 1);

    return 0;
}