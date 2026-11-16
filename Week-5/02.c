#include <stdio.h>

int main()
{
    int num1;
    int modNum = 0;
    int setBit = 1;
    
    scanf("%d", &num1);
    
    
    modNum |= setBit << num1;
    printf("%d", modNum);
}
