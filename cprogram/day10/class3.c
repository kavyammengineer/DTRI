#include<stdio.h>
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int i,sum=0;
    for(i=0;i<8;i++)

    {
           sum=sum+arr[i];
             printf("%d\t",sum);
    }

    return 0;

}
