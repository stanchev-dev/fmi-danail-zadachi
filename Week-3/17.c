#include <stdio.h>

int main()
{
    char a, b, c, d, e;
    
    scanf("%c", &a , &b, &c, &d, &e);
    
    a = a + 32;
    b = b + 32;
    
    if (e >= 'A' && e <= 'Z')
    {
        e += 32;
    } 
    
    if ((e >= a && e <= b) || (e >= c && e <= d))
    {
        printf("true");
    }
    else 
    {
        printf("false");
    }
    
    if ((e >= a && e <= b) && (e >= c && e <= d))
    {
        printf("true");
    }
    else 
    {
        printf("false");
    }
    
    if ((е >= а && e <= b) && !(e >= c && e <= d))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    
}
