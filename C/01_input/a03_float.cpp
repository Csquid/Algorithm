/*

실수형(float)로 변수를 선언하고 그 변수에 실수값을 저장한 후
저장되어 있는 실수값을 출력해보자.

*/

#include <stdio.h>

int main()
{
    float nFloat = 0.0;
    
    scanf("%f", &nFloat);
    
    printf("%f", nFloat);
}