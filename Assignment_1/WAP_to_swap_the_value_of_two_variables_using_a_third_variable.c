#include<stdio.h>

int main()
{
    int a,b,tmp;
    printf("Enter two Variables \n"); 
    printf("\n\ta = ");
    scanf("%d",&a);
    printf("\n\tb = ");
    scanf("%d",&b);
    tmp=a;
    a=b;
    b=tmp;
    printf("\n\ta = %d\tb = %d ", a, b);
    return 0;
}
// run it here online https://repl.it/NmHr/1
