#include <stdio.h>

void conta_tempo (int  n) {
    printf("%d ", n);
    n--;
    
    if (n > 0) {
        conta_tempo(n);
    }

    printf("%d ", n);
}

int main() {
    int n;

    scanf("%d", &n);

    conta_tempo(n);

    return 0;
}
