#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int last_digit = n % 10;
    
    if (last_digit == 0 ||
        last_digit == 2 ||
        last_digit == 4 ||
        last_digit == 6 ||
        last_digit == 8)
    {
        n -= last_digit;
        last_digit = last_digit % 3;
        
        n += last_digit;
        printf("%d", n);
    }
    else if (last_digit == 1 ||
        last_digit == 3 ||
        last_digit == 5 ||
        last_digit == 7 ||
        last_digit == 9)
    {
        n -= last_digit;
        last_digit = last_digit % 2;
        
        n += last_digit;
        printf("%d", n);
    }
    
}
