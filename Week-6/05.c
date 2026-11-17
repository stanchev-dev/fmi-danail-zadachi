#include <stdio.h>

int biggerAOrB(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else if (n2 > n1)
    {
        return n2;
    }
    
}

int biggerCOrD(int n3, int n4)
{
    if (n3 > n4)
    {
        return n3;
    }
    else if (n4 > n3)
    {
        return n4;
    }
    
}


int main()
{
    int n1,n2,n3,n4;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    if (biggerAOrB(n1, n2) > biggerCOrD(n3, n4))
    {
            printf("%d", biggerAOrB(n1, n2));
    }
    else if (biggerAOrB(n1, n2) < biggerCOrD(n3, n4))
    {
            printf("%d", biggerCOrD(n3, n4));
    }
    else
    {
        printf("Nums are even.");
    }
    
}
