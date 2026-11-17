#include <stdio.h>

int getLength(int n)
{
    int counter = 0;
    
    
    while(n != 0)
    {
        n = n / 10;
        counter++;
    }
    return counter;
}

int isSorted(int n)
{
    int length = getLength(n);
    
    int lastDigit;
    int nextDigit;

    
    for (int i = 0;  i < length; i++)
    {
        if (i == 0)
        {
            lastDigit = n % 10;
        }
        
        nextDigit = n % 10;
        n = n / 10;
        
        if (nextDigit <= lastDigit)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int num1;
    
    scanf("%d", &num1);
    
    if (isSorted(num1))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
}
