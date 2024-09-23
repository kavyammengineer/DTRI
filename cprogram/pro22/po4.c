#include<stdio.h>
void address_of_array(int n,int arr[n]);
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("the address of array:\n");
    address_of_array(n,arr);

    return 0;
}
void address_of_array(int n,int arr[n])
{
int *address[n];
for(int i=0;i<n;i++)
    {
        address[i]=arr[i];
        printf("%d ",(address));
    }
}
