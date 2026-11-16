#include <stdio.h>

int main() {
    int a;
    int pos, value;

    scanf("%d %d %d", &a, &pos, &value);
    
    if (value == 1)
    {
        a = a | (1 << pos);
    }
    else
    {
        a = a & ~(1 << pos);
    }
    printf("%d", a);
    return 0;
}
