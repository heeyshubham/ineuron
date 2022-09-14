#include<stdio.h>
int main()
{   
    //Q11

    char hhmm[6];
    printf("Enter Time (HH:MM): ");
    fgets(hhmm, 6, stdin);
    printf("%.2s Hour and %.*s Minute", hhmm, 2, hhmm + 3);
    
    //Q11 SOLN END

}
