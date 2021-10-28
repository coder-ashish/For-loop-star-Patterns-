#include <stdio.h>
int main() {
   int n, i, j, mid;
   printf("Enter number of lines: ");
   scanf("%d", &n);
   if(n %2 == 1) { //when n is odd, increase it by 1 to make it even
      n++;
}
mid = (n/2);
for(i = 1; i<= mid; i++) {
    for(j = 1; j<=(mid-i); j++){ //print the blank spaces before star
      printf(" ");
    }
    if(i == 1) {
      printf("*");
    } else {
      printf("*"); //in each line star at start and end
      position
      for(j = 1; j<=2*i-3; j++){ //print space to make hollow
          printf(" ");
      }
      printf("*");
    }
    printf("\n");
}
for(i = mid+1; i<n; i++) {
   for(j = 1; j<=i-mid; j++) { //print the blank spaces before star
      printf(" ");
   }
   if(i == n-1) {
      printf("*");
   } else {
      printf("*"); //in each line star at start and end
      position
      for(j = 1; j<=2*(n - i)-3; j++) { //print space to make
        hollow
        printf(" ");
      }
      printf("*");
   }
   printf("\n");
}
