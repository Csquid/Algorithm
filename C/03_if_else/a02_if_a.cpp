/*

세 정수 a, b, c가 입력되었을 때, 짝(even)/홀(odd)을 출력해보자.


참고
if(조건)
{ //코드블록1 시작
  ... 실행...;
  ...
}
else
{ //코드블록2 시작
  ... 다른실행...;
  ...
}
의 조건/선택 실행구조는 주어진 “조건”을 검사해 참인 경우에는 코드블록1을 실행하고,
거짓인 경우에는 코드블록2를 실행한다.

3정수 a,b,c 가 공백을 두고 입력 [ a <= a, b, c <= +2147483647 ]
input : 1 2 8
output : 
    odd
    even
    even

*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    char* odd  = "odd\n";
    char* even = "even\n";

    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 % 2 == 0) 
    {
        printf(even);
    } 
    else 
    {
        printf(odd);
    }

    if(num2 % 2 == 0) 
    {
        printf(even);
    } 
    else 
    {
        printf(odd);
    }

    if(num3 % 2 == 0) 
    {
        printf(even);
    } 
    else 
    {
        printf(odd);
    }
}