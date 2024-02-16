#include<stdio.h>
int main()
{
    int n,o,t,h;
    printf("enter the number");
    scanf("%d", &n);
    h=n/100;
    t=n/10-h*10;
    o=n-100*h-t*10;
    int i=1,j=1,k=1,a=1,b=1,c=1;
    while(i<=h){
        a=a*1;
        i=i+1;
    }
    while(j<=t)
    {
        b=b*j;
        j=j+1;
    }
    while(k<=o){
        c=c*k;
        k=k+1;
    }
    printf("a is %d,b is %d,c is %d",a,b,c);
    while(n==(a+b+c)){
        printf("\nit is a strong number");
        break;
    }
    while (n!=(a+b+c))
    {
    printf("\nit is not a strong number");
    break;
    }
    
}