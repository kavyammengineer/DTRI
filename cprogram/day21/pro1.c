#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("MY_FILE.txt","w");
    if(fp==NULL)
    {
        printf("error opening file");
        return 1;
    }
    fprintf(fp,"this is first line");
    fprintf(fp,"this is second line");
    fclose(fp);


     fp=fopen("MY_FILE.txt","r");
    if(fp==NULL)
    {
        printf("error opening file");
        return 1;
    }
    while(fgets(str,100,fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}
