#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, j, k, l;
    srand(time(NULL));
    printf("生成する数を指定\n");
    scanf("%d", &i);

    for(j = 0; j < i; j++)
    {
        k = rand() % 10;
        l = 36;
        printf("%d", l);
        printf(".%d\n", k);
    }
    return 0;
}