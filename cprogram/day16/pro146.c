#include<stdio.h>
struct student{
char name[10];
int birth;
int age}s[10];
int main()
{
int i,j,n;
printf("enter the rows:");
scanf("%d",&n);

    printf("enter the name and date of birth:");

    for(i=0;i<n;i++)
    {
      scanf("%s %d",s[i].name,&s[i].birth) ;
    }
    for(i=0;i<n;i++)
    {
        s[i].age=2024-s[i].birth;
    }
    for(i=0;i<n;i++)
    {
        printf("%s is %d years old\n",s[i].name,s[i].age);
    }
    return 0;
}
