#include <stdio.h>

int main()
{
    int num1, position;
    scanf("%d %d", &num1, &position);
    
    num1 = num1 & ~(1 << position);
    printf("%d", num1);
}
