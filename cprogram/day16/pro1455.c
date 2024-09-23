#include<stdio.h>
struct student{
char name[10];
int marks;}s[10];
int main()
{
int i,j,n;
printf("enter the rows:");
scanf("%d",&n);

    printf("enter the marks and score:");

    for(i=0;i<n;i++)
    {
      scanf("%d %s",&s[i].marks,s[i].name) ;
    }

    int temp;


    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        if (s[j].marks<s[j+1].marks)
        {
            temp=s[j].marks;
            s[j].marks=s[j+1].marks;
            s[j+1].marks=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d scored by %s\n ",s[i].marks,s[i].name);
    }

}
