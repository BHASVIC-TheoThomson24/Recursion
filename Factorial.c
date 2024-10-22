#include <stdio.h>

int main(void) {
    int n=0, factorial=1;
    printf("Please enter n: \n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        factorial=factorial*i;
    }
    printf("%d",factorial);
    return 0;
}
