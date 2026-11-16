#include <stdio.h>

int main()
{
    int num1, position;
    int finalResult = 0;
    
    scanf("%d %d", &num1, &position);
    
    finalResult = (num1 & (1 << position)) != 0;
    printf("%d", finalResult);
}
