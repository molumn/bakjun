#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    /* start from here */
    int a, b;
    scanf("%d %d", &a, &b);

    int b_1     = b % 10;
    int b_10    = (b % 100 - b_1)  / 10;
    int b_100   = (b - b_10 - b_1) / 100;

    printf("%d\n", a * b_1);
    printf("%d\n", a * b_10);
    printf("%d\n", a * b_100);
    printf("%d\n", a * b);

    return 0;
}
