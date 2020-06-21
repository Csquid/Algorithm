/*
세 개의 숫자가 주어질 때 두번째로 작은 수를출력해보자.

예를 들어, 5 9 2 가 있다면 두번째로 작은 수는 5이다.

입력: 세 개의 정수가 공백으로 구분되어 입력된다. 

출력: 세 개의 정수 중 두번째로 작은 숫자를 출력한다.

ex)  input:  201 20 3
     output: 20

*/

#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 7;
    int num3 = 1;

    int max = 0;
    int middle = 0;
    int min = 0;

    if(num1 < num2)         //num1 이 num2 보다 작다
    {
        if(num1 < num3) 
        {
            if(num2 < num3) 
            {
                middle = num2;
            } 
            else 
            {
                middle = num3;
            }
        }
        else
        {
            if(num2 < num3) 
            {
                
            }
        } 
    } 
    else                    // num1 이 num2 보다 크다
    {  
        if(num1 < num3) 
        {
            if(num2 < num3) 
            {
                
            }
        }
    }

    printf("%d", middle);



        
}