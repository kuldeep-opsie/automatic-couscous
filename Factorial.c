#include <stdio.h>
int main() {
    int factorial = 1, a, i;
    printf("enter a number: ");
    scanf("%d", &a);
    for(i = 1; i <= a; i++) {
        factorial = factorial*i;
    }
    print("the f
        actorial of %d is %d", a, factorial);
    return 0;
}
