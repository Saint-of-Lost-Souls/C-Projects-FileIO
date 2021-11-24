#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* FILE *pFile = fopen("employee.txt", "w");

    fprintf(pFile, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); */

    FILE * pFile = fopen("employee.txt", "a");

    fprintf(pFile, "\nKelly, Customer Service");
    
    
    fclose(pFile);    
    return EXIT_SUCCESS;
}