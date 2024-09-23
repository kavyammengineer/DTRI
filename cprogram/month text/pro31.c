#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("enter the string");
    scanf("%[^\n]s",s1);
    int length = strlen(s1);
    int count = 0,output=0;


       for (int i = 0; i < length; i++) {
        if (s1[i] !=' ') {
            if (count==0)
            {
                output++;
                count = 1;
            }
        }
         else
        {
                count = 0;
         }

    }
    printf("%d",output);
}

