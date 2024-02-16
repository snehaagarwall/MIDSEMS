#include<stdio.h>
int main()
{
    int n,a,b;
    printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        n=(n-i)+i;
        a=n-i;
        b=i;
        printf("\n value of a is %d and b is %d", a,b);
    }
    
}