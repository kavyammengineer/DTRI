#include<stdio.h>
int main()
{
    int n,i,max;
    printf("enter the no of elements");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    for(i=0; i<n; i++)
    {
        if(*(arr+i)>max)
            max=*(arr+i);
    }
    printf("%d",max);
    free (arr);
return 0;
}
