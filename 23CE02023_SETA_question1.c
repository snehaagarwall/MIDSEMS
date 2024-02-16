#include<stdio.h>
int main()
{
    float r,vol,surfarea;
    printf("enter radius:");
    scanf("%f",&r);
    vol=1.33*3.14*r*r*r;
    surfarea=4*3.14*r*r;
    printf("\n volume of sphere is %.2f",vol);
    printf("\n surface area of sphere is %.2f",surfarea);
    return 0;

    
}