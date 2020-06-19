/*
int형 정수 1개를 입력받아 공백을 사이에 두고 3번 출력해보자.

입력: 125

출력: 125 125 125

*/

#include <stdio.h>

int main()
{
    int nInt = 0;

    scanf("%d", &nInt);

    printf("%d %d %d", nInt, nInt, nInt);
}