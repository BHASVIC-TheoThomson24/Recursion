#include <stdio.h>

int main(void) {
    int n=0, factorsum=0;
    printf("Please enter a number: \n");
    scanf("%d",&n);
    factorsum=1;
    for (int i=2;i<n;i++) {
        if(n%i==0) {
            factorsum=factorsum+i;
        }
    }




    if(factorsum==n) {
        printf("%d is a perfect number",n);
    }
    else {
        printf("%d is not a perfect number",n);
    }

    return 0;
}