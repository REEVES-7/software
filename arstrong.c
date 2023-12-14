#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int z;
    int x;
    int y;
    int j;
    printf("enter a number");
    scanf("%d",&n);
    z=n;
    int sum=0;
    int count=0;
    while(y!=0)
    {
        j=y%10;
        count++;
        y=y/10;
    }
    while(n!=0)
    {
        x=n%10;
        sum=sum+pow(x,count);
        n=n/10;
    }
    if(z==sum)
    {
        printf("it is armstrong");
    }
    else
    {
        printf("it is not an armstrong");
    }
    return 0;
}
