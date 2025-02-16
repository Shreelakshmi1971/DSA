#include <stdio.h>
int max_of_four(int a, int b, int c, int d) {
    int maxNum = a;
    if(b > maxNum) {
        maxNum = b;
    }
    if (c > maxNum) {
        maxNum = c;
    }
    if (d > maxNum) {
        maxNum = d;
    }
    return maxNum;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}