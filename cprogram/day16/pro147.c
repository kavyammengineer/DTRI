#include<stdio.h>
struct student{
int id;
char name[10];
int marks;
}s[10];
int main()
{
    int i,j,n,index;
    printf("enter the number of student:");
    scanf("%d",&n);
    printf("enter the id,name,marks:");
    for(i=0;i<n;i++)
    {
      scanf(" %d %9s %d",&s[i].id,s[i].name,&s[i].marks);
    }
int largest=s[0].marks;
    for(i=0;i<n;i++)
    {
        if(s[i].marks>largest)
        {
            largest=s[i].marks;
            index=i;
        }
    }

    printf("%d %s %d",largest,s[index].name,s[index].id);
    getchar();
    return 0;
}
