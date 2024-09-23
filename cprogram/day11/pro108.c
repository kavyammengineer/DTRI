#include<stdio.h>
void delete_position(int a[],int pos,int size);
int main()
{
    int a[]={1,2,3,4,5,6,7},i;
    int pos;
    printf("enter the position");
    scanf("%d",&pos);
    int size=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    delete_position(a,pos,size);
    for(i=0;i<size-1;i++)
    {
        printf("%d ",a[i]);
    }


}
 void delete_position(int a[],int pos,int size)
 {
     for(int i=pos-1;i<size;i++)
     {
         a[i]=a[i+1];
     }

 }
