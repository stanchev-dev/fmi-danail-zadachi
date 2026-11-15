#include <stdio.h>

int main()
{
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    for (int i = n1 + 1; i < n2; i++)
    {
        int unique = 1;
        int temp = i;
        
        while (temp > 0 && unique)
        {
            int currentDigit = temp % 10;
            int rest = temp / 10;
            
            while (rest > 0)
            {
                if (currentDigit == (rest % 10))
                {
                    unique = 0;
                    break;
                }
                rest /= 10;
            }
            temp /= 10;
        }
        if (unique)
        {
            printf("%d ", i);
        }
    }
}
