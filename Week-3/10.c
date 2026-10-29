#include <stdio.h>
int main()

{
    int n, num1, num2;
    scanf("%d", &n);
    
    num1 = (n / 1000) * 10 + n % 10;
    num2 = ((n/100) % 10) * 10 + ((n/10) % 10);
    
    if (num1 == num2)
    {
        printf("Numbers are equal");
    }
    else if(num1 > num2)
    {
        printf("%d > %d", num1, num2);
    }
    else if(num2 > num1)
    {
        printf("%d < %d", num1, num2);
    }
    
}
