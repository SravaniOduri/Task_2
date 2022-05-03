#include <stdio.h>
int fib(int n)
{
    if (n <= 1) 
    {
        return n;
    }
 
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n,f1,f2,f3,f;
    scanf("%d",&n);
    printf("Corresponding fibanocci number is %d", fib(n));
    printf("Enter f");
    scanf("%d",&f);
    f1=0;
    f2=1;
    if(n==0)
    printf("\nIt is a fibanocci num");
    f3=f1+f2;
    while(f3<f)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;   
    }
    if(f3==f)
    printf("\nfibanocci");
    else
    printf("\nnot a fibanocci");
    return 0;
}
