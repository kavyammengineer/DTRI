#include<stdio.h>
struct student {
char name[10];
int age;
int marks};
int main()
{
    int n;
    printf("enter the number of student");
    scanf("%d",&n);
    struct student s[n];
    printf("enter the student name ,age,marks");
    for(int i=0;i<n;i++)
    {
        scanf("%s%d%d",s[i].name,&s[i].age,&s[i].marks);
    }
struct student temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].marks<s[j].marks)
            {
                 temp= s[i];
                 s[i]=s[j];
                 s[j]=temp;

            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %d %d",s[i].name,s[i].age,s[i].marks);
        printf("\n");
    }

}
