#include<stdio.h>
void printarray(int arr[]);
int main()
{
    int arr[4]={1,2,3,4};
    printarray(arr);
    return 0;
}
void printarray(int arr[])
{
    printf("the array is");
    for(int i=0;i<4;i++)
        printf("%d",arr[i]);
}
