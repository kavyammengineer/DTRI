#include <stdio.h>
#include <math.h>

int nth_root(int num, int n);
int powerof(int num, int n);
int isExact = 0;
int main(void)
{
    int num = 27, n = 2;
    int result = nth_root(num, n);

   if(isExact)
    {
    printf("%dth root is %d\n", n, result);
    }
else
    {
printf("%d th root lies between %d and %d\n", n, result, result+1);
    }
    return 0;
}

int nth_root(int num, int n)
{

    int exponential;

    for (int i = 1;; i++)
    {
        exponential = powerof(i, n);

        if (exponential == num)
        {
            isExact = 1;
            return i-1;
        }
        else if (exponential > num)
        {
            isExact = 0;
            return i;
        }
    }
}

int powerof(int num, int n)
{

    int result = 1;

    for (int i = 0; i < n; i++)
    {
        result *= num;
    }
return result;
}
