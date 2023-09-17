#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    string s = R"###(|\_/|
|q p|   /}
( 0 )"""\
|"^"`    |
||_/=\\__|)###";

    printf("%s", s.c_str());

    return 0;
}

/*

    R"###()###""?
        A:  원래 용법은 R"(어쩌구 저쩌구)"이고 ###은 문자 안에서 )"로 끝나버리면 인식 오류가 생기니까 적은 거임
            raw string literals라고 파일에 적은 그대로 줄바꿈, 공백까지 다 데이터에 저장됨.

*/
