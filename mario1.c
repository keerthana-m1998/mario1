#include<stdio.h>
#include<cs50.h>
void bricks(int k);
int main(void)
{
    int n;
    do {
        n = get_int("enter the length of bricks:\n");
    }
    while (n < 1 || n>8);
    //printf("%i ",n);
    bricks(n);
}
void bricks(int k)
{
    for (int i = 1; i<=k; i++)
    {
        for(int l = 1; l<=k-i; l++)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++)
        {

            printf("#");
        }
        printf("  ");
        for(int m = 1; m<=i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}


