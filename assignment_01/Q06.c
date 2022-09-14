#include<stdio.h>
#include<string.h>
int main()
{   
    //Q6
    char name[100];
    printf("Enter Your Name: ");
    fgets(name, 100, stdin);
    printf("\"Hello, %.*s\"",(int)strlen(name)-1, name);
    return 0;
    
    //Q6 SOLN END

}
