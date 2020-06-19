/*
년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.
연, 월, 일이 ".(닷)"으로 구분되어 입력된다.

입력받은 연, 월, 일을 yyyy.mm.dd 형식으로 출력한다.
(%02d를 사용하면 2칸을 사용해 출력하는데, 한 자리 수인 경우 앞에 0을 붙여 출력한다.)

입력: 2013.8.5

출력: 2013.08.05

*/

#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;

    scanf("%d.%d.%d", &year, &month, &day);

    printf("%04d.%02d.%02d", year, month, day);

    return 0;
}