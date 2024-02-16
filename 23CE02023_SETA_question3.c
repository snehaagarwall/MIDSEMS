#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,x,y;   // x and y are the roots of the equation.
    printf("enter a,b and c");
    scanf("%d %d %d",&a,&b,&c);
    if(b*b-4*a*c<0){
        printf("the equation has imaginary roots");
    }
    else if(b*b-4*a*c>=0)
    {
        x=(-b+sqrt(b*b-4*a*c))/2*a;
        y=(-b-sqrt(b*b-4*a*c))/2*a;
        printf("x is %d and  y is %d",x,y);
    }
    return 0;
}