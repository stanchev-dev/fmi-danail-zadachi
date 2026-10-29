#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,z;
    double epsilon = 0.000001;
    
    scanf("%lf %lf %lf", &x, &y, &z);
    
    if (fabs(z-x) < epsilon || fabs(z-y) < epsilon)
    {
        printf("Интервала е затворен");
    }
    else if (z > x && z < y)
    {
        printf("Интервала е отворен");
    }
    else 
    {
        printf("Z не принадлежи на интервала");
    }
}
