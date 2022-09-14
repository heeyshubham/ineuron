#include<stdio.h>
int main()
{   
    //Q10

    char ddmmyyyy[11];
    printf("Enter date (dd/mm/yyyy): ");
    fgets(ddmmyyyy, 11, stdin);
    printf("Day - %.2s Month - %.*s Year - %.*s", ddmmyyyy, 2, ddmmyyyy + 3, 4, ddmmyyyy + 6);
    
    //Q10 SOLN END

}
