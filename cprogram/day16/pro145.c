#include<stdio.h>
struct student{
char name[10];
int marks;}s1,s2,s3,s4,s5;
int main()
{
    struct student s1={"kavya",4};
    struct student s2={"maha",1};
    struct student s3={"shiva",3};
    struct student s4={"adarsh",5};
    struct student s5={"ram",6};
    struct student s[5] = {s1, s2, s3, s4, s5};
    int n = 5;
    int temp;
    int i,j;

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
