#include<stdio.h>

int main() {
    int n, s; 
    double max = 0.0;
    double score[1000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &s);
        score[i] = s;
        if(max < score[i]) {
            max = score[i];
        }
    }

    for(int j = 0; j < n; j++) {
        score[j] = (double)score[j] / max * 100;
    }

    double sum, avg;
    for(int k = 0; k < n; k++) {
        sum += score[k];
    }
    avg = sum / (double)n;

    printf("%lf\n", avg);

    return 0;
} 