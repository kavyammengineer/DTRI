#include<stdio.h>
int count_dulplicate(int a[],int n);

int main()
{
    int a[5],i,n;
    printf("enter the number of columns");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

            scanf("%d",&a[i]);
    }
    count_dulplicate( a, n);
    printf("the count value is %d",count_dulplicate( a ,n));

}
int count_dulplicate(int a[],int n)
{
     int count=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }


    }
    return count;
}
