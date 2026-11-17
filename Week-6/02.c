#include <stdio.h>

int getLenght(int n)
{
    int counter = 0;
    
    
    while(n != 0)
    {
        n = n / 10;
        counter++;
    }
    return counter;
}

int Concatenate(int n1, int n2)
{
    int length = getLenght(n2);
    
    for (int i = 0; i < length ; i++)
    {
        n1 = n1 * 10;
    }
    return n1 + n2;
    
}


int main()
{
    int num1,num2;
    
    scanf("%d %d", &num1, &num2);
    
    printf("%d", Concatenate(num1, num2));
}
