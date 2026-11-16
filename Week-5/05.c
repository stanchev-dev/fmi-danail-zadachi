#include <stdio.h>

int main()
{
    int num1, position;
    int newNum = 0;
    scanf("%d %d", &num1, &position);
    
    newNum += 1 << position;
    printf("%d", num1 + newNum);
}
