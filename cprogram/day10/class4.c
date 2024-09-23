#include<stdio.h>
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int i,sum=0,avg;
    for(i=0;i<8;i++)
    {
           sum=sum+arr[i];
             printf("%d\t",sum);

    }
   int elements=sizeof(arr)/sizeof(int);
   printf("%d the elements",elements);
   avg=sum/elements;
    printf(" the average %d",avg);
    return 0;

}
