#include<stdio.h>

int main() {
    int c;
    int score[1000];

    scanf("%d", &c);
    for(int i = 0; i < c; i++) {
        int num, sum = 0, avg = 0, count = 0;

        scanf("%d", &num);
        for(int j = 0; j < num; j++) {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (double)sum / num;
        for(int k = 0; k < num; k++) {
            if(score[k] > avg) {
                count++;
            }
        }
        printf("%.3lf%%\n", (double)count / num * 100);
    }

    return 0;
}   