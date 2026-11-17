#include <stdio.h>

int isPermutation(int num1, int num2)
{
    for (int digit = 0; digit <= 9; digit++)
    {
        int copy1 = num1;
        int copy2 = num2;
        
        int count1 = 0;
        int count2 = 0;
        
        do
        {
            if (copy1 % 10 == digit)
            {
                count1++;
            }
            
            copy1 = copy1 / 10;
        }
        while(copy1 != 0);
        
        do
        {
            if (copy2 % 10 == digit)
            {
                count2++;
            }
            
            copy2 = copy2 / 10;
        }
        while(copy2 != 0);
        
        if (count1 != count2)
        {
            return 0;
        }
        return 1;
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
