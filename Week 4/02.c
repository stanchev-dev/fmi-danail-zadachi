#include <stdio.h>

int main()
{
    int n, temporaryNum;
    int revNum = 0;
    
    scanf("%d", &n);
    
    temporaryNum = n;
    
    while (temporaryNum > 0)
    {
        revNum = revNum * 10 + temporaryNum % 10;
        
        temporaryNum = temporaryNum / 10;
    }
    
    printf("%d", (n == revNum) ? 1 : 0);
    
    return 0;
}
