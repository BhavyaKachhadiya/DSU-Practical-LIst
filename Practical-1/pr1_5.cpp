#include <stdio.h>

int main() {
  int size, i;
  int arr[100];

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("All negative elements in the array are: ");
  for (i = 0; i < size; i++) {
    if (arr[i] < 0) {
      printf("%d ", arr[i]);
    }
  }
  printf("This code was created by bhavya Kachhadiya.");
  printf("Erollment number: 220130318020");
  return 0;
}
