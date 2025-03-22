#include <stdio.h>
int main()
{
    int n;
    printf("enter a no.: ");
    scanf("%d",&n);
    int c=count(n);
    if(c==2)
    {
        printf("%d is a prime no.",n);
    }
    else
    {
        printf("%d is not a prime no.",n);
    }
    return 0;  
}
int count(int a)// count the no. of factors
{
    int c=0;
    for (int i = 0; i <=a; i++)
    {
       if (a%i==0)
       {
        c++;
       }
    }
    return c;
}