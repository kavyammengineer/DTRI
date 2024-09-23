
#include<stdio.h>
int main()
{
    int a1[]= {1,5,12,15};
     int n1=sizeof(a1)/sizeof(a1[0]);
    int a2[]= {0,1,1,3,14,15,20};
     int n2=sizeof(a2)/sizeof(a2[0]);
      mergearr(a1,a2,n1,n2);
    return 0;

}
void mergearr(int a1[], int a2[], int n1, int n2) {
    int a = n1 + n2;
    int *arr = malloc(a * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < n1 || j < n2) {
        if (a1[i] < a2[j]) {
            arr[k++] = a1[i++];
        } else {
            arr[k++] = a2[j++];
        }
    }


    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}
