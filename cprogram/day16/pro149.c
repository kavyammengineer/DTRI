#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct student{
int id;
char name[10]
}s[10];

int main() {
    srand(time(NULL));
    int i,n;
    printf("enter the number of stidents");
    scanf("%d",&n);
    printf("enter the student id and name:");
    for(i=0;i<n;i++)
    {
        scanf("%d%s",&s[i].id,s[i].name);
    }
    while(n>1){

    int random_number = rand() % n;

        printf("the eliminated person %d id  %s\n ", s[random_number].id,s[random_number].name);
           for(i=random_number;i<n-1;i++)
           {
               s[i]=s[i+1];
           }
            n--;
    }
       printf(" the winner is %d id %s\n",s[0].id,s[0].name);
    return 0;
}


