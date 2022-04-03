#include <stdio.h>

int primenumber(int num);
int i;
int num1;
int main(void)
{
    printf("素数=");
    scanf("%d",&num1);
    primenumber(num1);
    return 0;
}

int primenumber(int num)
{
    for (i = 1; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            printf("素数\n");
        }else{
            printf("素数ではない\n");
        }
        
    }
    return 0;
}