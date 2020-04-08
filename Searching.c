#include<stdio.h>
#include "ArrayInput.c"

int main() {
  int n,i,k;
  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the number to be searched: ");
  scanf("%d", &k);
  int *a;
  a = getInputFromUser(n);
  // printf("The array is: ");
  // for(i = 0; i < n; i++) {
    // printf("%d ", a[i]);
  // }
  // printf("\n");
  for(i = 0; i < n; i++){
    if(a[i] == k) {
      printf("^\n");
      break;
    }
    else {
      printf(getSpace(a[i]));
    }
  }

}
