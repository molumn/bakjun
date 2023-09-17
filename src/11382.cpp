#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    /* start from here */
    long a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("%ld", a+b+c);

    return 0;
}


/*

    int가 안되는 이유>
        A:  int는 32비트 정수 변수 타입으로 표시 가능 범위는 2.14e10 정도이다. 그래서 1e10가 3개면 3e10라서 int 정수 범위를 넘는다. long 또는 unsigned int를 쓰자.

*/
