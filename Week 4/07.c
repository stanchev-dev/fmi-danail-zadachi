#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    
    int even_nums = 0;
    
    for (int i = 0; i < num; i++)
    {
        int numbers;
        scanf("%d", &numbers);
        
        if (numbers % 2 == 0)
        {
            even_nums = even_nums * 10 + numbers * 2;
        }
    }
    printf("%d", even_nums);
}
