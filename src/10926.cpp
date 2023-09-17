#include <stdio.h>
using namespace std;

int main() {

    char s[50];
    scanf("%s", s);
    printf("%s??!", s);

    return 0;
}

/*

    const char* 또는 char* 타입이 안되는 이유?
        A:  데이터 저장 방식상 선언 시 크기가 정해지기 때문에 scanf로 덮어쓰면 선언했던 공간 밖으로 데이터가 삐져나감 (이 때 세그먼트 오류가 뜬다)
            그러니까 해당 타입들을 사용할 때는 선언과 정의가 같이 이뤄질 때 하자!
    
    char s[50]은 왜 됨?
        A:  크기를 정했잖아!!!!!!!!!!!!!!!!! 그 크기가 안 넘으면 Segfault가 안 일어남

*/
