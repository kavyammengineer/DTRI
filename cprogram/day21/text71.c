#include<stdio.h>
void mixedstring( char str1[], char *str2);
int main()
{
    char str1[10],str2[10];
    printf("enter the first string:");
    scanf("%s",str1);
     printf("enter the first string:");
    scanf("%s",str2);
    mixedstring(str1,str2);
}
void mixedstring( char *str1, char *str2)
{
   int  n1=strlen(str1);
   int n2=strlen(str2);
   int  a=n1+n2;
    char *c = (char*)malloc(a * sizeof(char));
    int k = 0, i = 0, j = 0;
    for (; i < n1 || j < n2;) {
        c[k++] = str1[i++];
        c[k++] = str2[j++];
    }
    c[k] = '\0';
    printf("%s\n", c);
    free(c);
}



