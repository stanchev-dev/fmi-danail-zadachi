#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    
    long long a = 0, b = 1;
    
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            printf("%lld ", a);
        }
        else if (i == 1)
        {
            printf("%lld ", b);
        }
        else
        {
            int next = a + b;
            
            printf("%lld ", next);
            
            a = b;
            b = next;
        }
    }
    
    
}
