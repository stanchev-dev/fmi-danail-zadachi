// Формула за задачата:
// x*x + y*y < r*r  -> точката е вътре
// x*x + y*y == r*r -> точката е по контура
// x*x + y*y > r*r  -> точката е извън

#include <stdio.h>
int main()
{
    int r, x ,y;
    scanf ("%d %d %d", &r, &x, &y);
    
    
    if (x*x + y*y > r*r)
    {
        printf("Точката е вън");
    }
    
    else if(x*x + y*y < r*r)
    {
        printf("Точката е вътре");
    }
    else
    {
        printf("Точката е по контурата");
    }
}
