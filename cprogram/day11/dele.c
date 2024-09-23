#include <stdio.h>

void delete_element(int arr[], int pos, int *size)
{
  if (pos < 1 || pos > *size)
    {
    printf("Invalid position\n");
    return;
    }
  for (int i = pos - 1; i < *size - 1; i++)
    {
    arr[i] = arr[i + 1];
    }
  (*size)--;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
   int pos ;
  printf(" enter the position");
  scanf("%d",&pos);

  printf("Before deletion: ");
  for (int i = 0; i < size; i++)
    {
    printf("%d ", arr[i]);
    }
  printf("\n");

  delete_element(arr, pos, &size);

  printf("After deletion: ");
  for (int i = 0; i < size; i++)
    {
    printf("%d ", arr[i]);
    }
  printf("\n");
  return 0;
}




