//Search a pair of numbers whose sum is given (k)
// [2, 3, 5, 6] k = 11
#include<stdio.h>
#include "ArrayInput.c"
int main()
{

  int i=0,j=0,k;
  //get array
  int size;
  printf("Enter size of array: \n");
  scanf("%d", &size);
  int *arr;
  arr = getInputFromUser(size);

  // int arr[4] = {2,3,5,6};
  // get k
  printf("Please enter k: \n");
  scanf("%d", &k);
  //for loop
  for(i = 0; i <= size - 2; i++) {
    for(j = i + 1; j <= size - 1; j++) {
      printf("arr[i] = %d", arr[i]);
      printf("arr[j] = %d", arr[j]);

      if(arr[i] + arr[j] == k) {
        printf("%d", arr[i]);
        printf(", %d \n ", arr[j]);
        return 0;
      }
    }
  }
  printf("Sorry no pairs found! \n");
}
// k=11
// i=0, j=1, 2+3=5
// i=0, j=2, 2+5=7d
// i=0, j=3, 2+6=8
// i=1, j=2, 3+5=8
// i=1, j=3, 3+6=9
// i=2, j=3, 5+6=11
// 5, 6
