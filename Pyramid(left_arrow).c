#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the columns: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf("  ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("* "); // print the Star  
        }  
        printf ("\n");   
    }  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 2; j <= i; j++)  
        {  
            printf("  ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("* "); // print the Star  
        }  
        printf ("\n");   
    }  
    getch();      
}  
