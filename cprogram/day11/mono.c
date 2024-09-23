#include<stdio.h>
int Array_monotonic(int array[],int n);
int main()
{
    int a[6]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int monotonic=Array_monotonic(a,n);

    if(monotonic)
        printf("array is monotonic");
    else
        printf("array is not monotonic");

    return 0;
}
int Array_monotonic(int array[],int n)
{
    int i;
    for( i=0;i<n-1;i++)
    {

        if(array[i]>=array[i+1]||array[i+1]<=array[i+2])
        {
             continue;
        }
        else
            break;


    }
    if(i==n-1)
        return 1;
    else
         return 0;

}
