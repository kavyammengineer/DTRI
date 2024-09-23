
#include<stdio.h>
#include<string.h>

int main() {
    char s[10],t[10];
    printf("enter the string: ");
    scanf("%s",s);
    printf("enter the string: ");
    scanf("%s",t);
    int slen=strlen(s);
    int tlen=strlen(t);
    int count[256]={0}; // assuming ASCII characters
    int i,j;

    // count frequency of characters in s
    for(i=0;s[i]!='\0';i++) {
        count[s[i]]++;
    }

    // subtract frequency of characters in t
    for(j=0;t[j]!='\0';j++) {
        count[t[j]]--;
    }

    // check if all counts are zero
    for(i=0;i<256;i++) {
        if(count[i]!=0) {
            printf(" the string is not anagram");
            return 0;
        }
    }

    printf(" the string is anagram");
    return 0;
}

