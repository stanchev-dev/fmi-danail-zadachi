#include <stdio.h>

int main()
{
    int n;
    int factoriel = 1;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {   
        factoriel *= i;
    }
    printf("%d", factoriel);
}
