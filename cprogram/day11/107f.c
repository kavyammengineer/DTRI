#include<stdio.h>
void oddandeven_num(int a[],int n);
int main()
{
    int a[10],n,i;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
oddandeven_num(a, n);
getchar();
return 0;
}
void oddandeven_num(int a[],int n)
{
    int evenindex=0,oddindex=0,i,even[5]={0},odd[5]={0};
    for(i=0;i<n;i++)
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
    printf("the even value");
    for(i=0;i<evenindex;i++)
{
    printf("%d  ",even[i]);
}



    printf("\n");
    printf("the odd value");
    for(i=0;i<oddindex;i++)
{
    printf("%d  ",odd[i]);
}
    printf("\n");

}

