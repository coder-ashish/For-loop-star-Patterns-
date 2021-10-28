#include <stdio.h>  
#include <conio.h>  
void main()  
{  
      
    int i, j, rows, k, ch = 'A';  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
          
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%c ", ch);   
        }  
        ch++;  
        printf ("\n");  
    }  
    getch();  
}  
