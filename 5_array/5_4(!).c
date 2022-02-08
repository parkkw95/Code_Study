#include<stdio.h>

int main() {
    int n;
    int arr[10] = {0, };

    for(int i = 0; i < 10; i++) {
        scanf("%d", &n);
        arr[i] = (n % 42);
    }

    int result = 0;
    for(int i = 0; i < 10; i++) {
        int count = 0;  // 매 번 초기화되야 하기 때문에
        for(int j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;    // 같은 값을 가질 때 count 증가
            }
        }
        if(count == 0) { result++; } // 다른 값을 가질 때 result값 증가
    }

    printf("%d\n", result);

    return 0;
}