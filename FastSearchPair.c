//Search a pair of numbers whose sum is given (k)
// [2, 3, 5, 6] k = 11
#include<stdio.h>
int main()
{
  int i=0,k;
  //get array
  int arr[4] = {2,3,5,6};
  int exists[7] = {0,0,1,1,0,1,1};
  // get k
  printf("Please enter k: \n");
  scanf("%d", &k);
  //for loop
  for(i = 0; i <= 3; i++) {
    int need = k - arr[i]; 
    if(need <= 6 && need >= 0 && exists[need] == 1) {
      printf("%d", arr[i]);
      printf(", %d \n ", need);
      return 0;
    }
  }
  printf("Sorry no pairs found! \n");
}
 // k=8
 // i=0, need = 6
// k=1
// i=0 need = -1
