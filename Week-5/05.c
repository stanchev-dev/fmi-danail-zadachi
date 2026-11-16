#include <stdio.h>

int main()
{
    int num1, position;
    int newNum = 0;
    scanf("%d %d", &num1, &position);

    if ((num1 & (1 << position)) == 0)    
        {
            newNum = 1 << position;
            printf("%d", num1 + newNum);
        }
    else
    {
        printf("%d", num1);
    }
}
