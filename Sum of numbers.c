#include <stdio.h>

int add(int input);

int main(void) {
    int n=0;
printf("Please enter n: \n");
    scanf("%d",&n);
    n=add(n);
    printf("%d",n);
    return 0;
}

int add(int input) {
    if (input==1) {
        return 1;
    }
    return add(input-1)+input;
}