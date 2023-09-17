#include <stdio.h>
using namespace std;

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", (a+b)%c);
    printf("%d\n", (a+b)%c);        // ((A%C)+(B%C))%C and (A+B)%C is equivalence
    printf("%d\n", (a*b)%c);
    printf("%d\n", (a*b)%c);        // ((A%C)*(B%C))%C and (A*B)%C is equivalence

    return 0;
}


/*

    나머지 계산 (mod 함수) 특징을 알아보는 것이 도움이 됩니다.

*/
