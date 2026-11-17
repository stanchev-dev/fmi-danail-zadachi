#include <stdio.h>

int maxNum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else if (num2 > num1)
    {
        return num2;
    }
    
}
int main()
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    
    printf("%d", maxNum(n1,n2));
}
