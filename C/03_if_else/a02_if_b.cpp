#define MAX_LEN 3
#include <stdio.h>

int main()
{
    int numArr[MAX_LEN] = { 0, };
    int i               = 0;

    char *odd = "odd\n";
    char *even = "even\n";

    for (i = 0; i < MAX_LEN; i++)
    {
        scanf("%d", &numArr[i]);
        
        if (numArr[i] % 2 == 0)
        {
            printf(even);
        }
        else
        {
            printf(odd);
        }
    }
}