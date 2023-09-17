#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {

    double a, b;
    scanf("%lf %lf", &a, &b);
    
    printf("%.9lf", a/b);

    return 0;
}


/*

    float 타입은 왜 7번째 자리에서 값이 다른가?
        A:  float는 32비트 부동소수점 저장방식이라 정확도가 그리 높지는 않다. 약 1e-7정도의 정확성을 보임 (변수의 절대값이 작으면 정확도가 전체적으로 떨어짐 -> 이건 스스로 탐구해보시오)

    꼭 %.9lf 를 써야하나?
        A: c++의 기본 출력은 소수 6자리수까지 표시하니까 1e-9의 정확도를 보여주려면 자리수를 명시해야한다. cout의 경우 cout.precision(9); 도 가능.

*/

