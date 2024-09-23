#include<stdio.h>
void address_array(int n,int a[n]);
int main()
{
    int n,i;
    printf("enter the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    address_array( n, a);

}
void address_array(int n,int a[n])
{
    int *address[n];
    int i;
    for(i=0;i<n;i++)
    {
        address[i]=&(a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",(address[i]));
    }


}



