#include <stdio.h>

void findPrimes(int n)
{
    int count = 0;
    int num = 2;

    while (count < n)
    {
        int isPrime = 1;
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main()
{
    int n;
    printf("Enter the number of primes to find: ");
    scanf("%d", &n);
    findPrimes(n);
    return 0;
}

