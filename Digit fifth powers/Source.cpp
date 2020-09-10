#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
long long int digits(int x)
{
    int z;
    long long int y = 0;
    while (x >= 10)
    {
        z = x / 10;
        y += pow(x - (z * 10),5);
        x /= 10;
    }
    y += pow(x,5);
    return y;
}
int main()
{
    int a=1000000, b = 1,c = 0;
    //scanf("%d", &a);
    printf("the sum of all the numbers that can be written as the sum of fifth powers of their digits.\n");
    while (b<=a)
    {
        if (digits(b)==b && b!=1)
        {
            printf("%d ", b);
            c += b;
        }
        b++;
    }
    printf("\nis %d ", c);
    return 0;
}