#include<stdio.h>
int dectobin(int decimal);
int main()
{
int decimal;
printf(" enter the decimal number:");
scanf("%d",&decimal);
dectobin( decimal);

}
int dectobin(int decimal)
{
    int count0=0,count1=0,remain;
    while(decimal>0)
    {
        remain=decimal%2;
        if(remain==0)
        {
            count0++;

        }
        else
        {
            count1++;
        }
        decimal=decimal/2;
    }
    printf("the number of zeros %d\n",count0++);
    printf(" the number of ones %d\n",count1++);
}
