#include<stdio.h>
#include<string.h>
int main()
{   
    //Q5

   char a[100];
   int length;

   printf("Enter a string to calculate its length = ");
   fgets(a, 100, stdin);

   length = strlen(a);

   printf("Length of the string = %d\n", length-1);

   return 0;
    
    //Q5 SOLN END

}
