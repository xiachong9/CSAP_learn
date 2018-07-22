#include <stdio.h>

int accum = 0;
int sum(int x, int y)
{
    int t = x + y;
    accum += t;
    return t;
}

int main()
{
    int c = sum(1, 2);
    printf("sum: %d\n", c);
    return 0;
}
