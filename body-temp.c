#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, j, k;
    srand(time(NULL));
    for(i = 0; i < 21; i++)
    {
        j = rand() % 10;
        k = 36;
        printf("%d", k);
        printf(".%d\n", j);
    }
}