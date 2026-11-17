#include <stdio.h>

int isPermutation(int num1, int num2)
{
    if (num1 <= num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num1,num2;
    
    scanf("%d %d", &num1, &num2);
    
    if (isPermutation(num1, num2))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
