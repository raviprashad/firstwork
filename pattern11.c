#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,c,r;
    printf("enter the value of n:");
    scanf("%d",&n);
    int t=-n;
    for(r=t;r<=n;r++)
    {
        if(r==0||r==1)
        goto lb;
        for(c=1;c<=abs(r);c++)
        {
            printf("* ");
        }
        printf("\n");
        lb:
    }
}