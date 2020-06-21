/*
    3 정수 숫자를 받고 만약 짝수라면 출력하기

    input : 1 2 4

    output: 2
            4

*/
// #define MAX_IDX 3
#include <stdio.h>

int main()
{
    int MAX_IDX = 3;
    int numArr[MAX_IDX] = { 0, };


    scanf("%d %d %d", &numArr[0], &numArr[1], &numArr[2]);

    for(int i = 0; i < MAX_IDX; i++) 
    {
        if(numArr[i] % 2 == 0) {
            printf("%d\n", numArr[i]);
        }
    }
}