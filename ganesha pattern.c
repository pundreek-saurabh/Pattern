#include<stdio.h>

void main()
{
 int n,i,j;
 printf("Enter the odd value of pattern\n");
 scanf("%d",&n);
 //print first component of the pattern
 printf("*");
    for(i=0;i<n-(n+1)/2-1;i++)
        {
            printf(" ");
        }
    for(i=0;i<(n+1)/2;i++)
        {
            printf("*");
        }
 printf("\n");
 //print the second component of the pattern
    for(i=0;i<(n-3)/2;i++)
        {
            printf("*");
                for(j=0;j<(n+1)/2-2;j++)
                    {
                        printf(" ");
                    }
            printf("*\n");
        }
//print the third component of the pattern
    for(i=0;i<n;i++)
        {
            printf("*");
        }
        printf("\n");
 //print the fourth component of the pattern
    for(j=0;j<(n-3)/2;j++)
    {
        for(i=0;i<(n+1)/2-1;i++)
            {
                printf(" ");
            }
        printf("*");
        for(i=0;i<(n+1)/2-2;i++)
            {
                printf(" ");
            }

        printf("*\n");
    }
//print the fifth and last part of the pattern
    for(i=0;i<(n+1)/2;i++)
    {
        printf("*");
    }
    for(i=0;i<n-(n+1)/2-1;i++)
    {
        printf(" ");
    }
    printf("*");
}
