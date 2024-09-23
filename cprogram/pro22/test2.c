#include<stdio.h>
void string_count(char *str1,char *str2,int n1,int n2);
int main()
{
    char str1[10],str2[10];
    printf("enter the string 1:");
    scanf("%s",str1);
    int n1=strlen(str1);
    printf("enter the string2:");
    scanf("%s",str2);
    int n2=strlen(str2);
 string_count( str1,str2,n1,n2);

}
void string_count(char *str1,char *str2,int n1,int n2)
{
    int i,j,index=0;
    int countarr[10];
    for(i=0;i<n1;i++)
    {
        int count=0;
        for(j=0;j<n2;j++)
        {
            if(str2[i]==str1[j])
            {
                count++;
            }
        }
      countarr[index++]=count;
    }
    for(i=0;i<index;i++)
{
    printf("%d ",countarr[i]);
}

}

