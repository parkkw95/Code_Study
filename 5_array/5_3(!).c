#include<stdio.h>

int main() {
    int a, b, c, m;
    int n[10] = {0, };  // 배열 값 0으로 지정

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    m = a * b *c;

    int num;
    while(m > 0) {  // 각 숫자가 몇 회 사용되었는지 구하는 방법
        num = m % 10;   // 곱셈한 값의 1의 자리부터 구한 뒤
        n[num]++;       // 각 숫자가 해당하는 배열의 값을 숫자가 나올 때 마다 더한 뒤
        m /= 10;        // 맨 앞자리의 수까지 구하는
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", n[i]);
    }

    return 0;
}