#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5},i,even[5]={0},odd[5]={0},evenindex=0,oddindex=0;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {

            even[evenindex]=a[i];
            evenindex++;
        }
        else
        {
            odd[oddindex]=a[i];
            oddindex++;

        }

    }
    printf(" the even value is");
    for(i=0;i<evenindex;i++)
          printf("%d ",even[i]);
          printf("\n");


printf(" the even value is");
    for(i=0;i<oddindex;i++)
      printf("%d ",odd[i]);
      printf("\n");

    getchar();
    return 0;

}
