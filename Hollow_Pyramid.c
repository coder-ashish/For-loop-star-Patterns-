#include <stdio.h>
int main() {
   int n, i, j;
   printf("Enter number of lines: ");
   scanf("%d", &n);
   for(i = 1; i<=n; i++) {
      for(j = 1; j<=(n-i); j++){ //print the blank spaces before star
         printf(" ");
      }
      if(i == 1 || i == n){ //for the first and last line, print the
         stars continuously
         for(j = 1; j<=i; j++) {
            printf("* ");
         }
      } else {
         printf("*"); //in each line star at start and end
         position
         for(j = 1; j<=2*i-3; j++) { //print space to make hollow
            printf(" ");
         }
         printf("*");
      }
      printf("\n");
   }
}
