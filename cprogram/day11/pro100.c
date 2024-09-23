#include<stdio.h>
int second_largest(  int a[],int size);
int main()
{
    int a[]={30,12,55,20,45};
    int res;
    int size=sizeof(a)/sizeof(a[0]);
    res=second_largest(a,size);
    printf("the second largest number is %d\n",res);
}

int  second_largest(int a[],int size)
{  int largest=a[0],i;
     int second =a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>largest)
            {
            second=largest;
            largest=a[i];

            }
        else if(a[i]>second && a[i]<largest)
        {
            second=a[i];
        }
}
return second;
}
