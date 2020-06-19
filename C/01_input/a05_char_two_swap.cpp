/*
2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자.
(출력하는 순서만 바꾸면 된다.)

입력: a b

출력: b a

*/

#include <stdio.h>

int main()
{
    char nChar1 = NULL;
    char nChar2 = NULL;

    scanf("%c %c", &nChar1, &nChar2);
    printf("%c %c", nChar2, nChar1);

    return 0;
}