#include<stdio.h>
int *getInputFromUser(int size) {
  int i;
  int arr[size];
  for(i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  return arr;
}
char *getSpace(int num) {
  if( num <= 9 ) {
    return "  ";
  }
  else {
    return "   ";
  }
}
// int main1() {
//   int s,i;
//   printf("Enter the size of the array:  \n");
//   scanf("%d", &s);
//   int *n;
//   n = getInputFromUser(s);
//   for(i = 0; i < s; i++) {
//     printf("%d ", n[i]);
//   }
//   printf(" \n");
//   return 0;
// }
