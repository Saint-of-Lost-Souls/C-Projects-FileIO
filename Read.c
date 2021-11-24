#include <stdio.h>

/* enum
{
    SIZE = 5
}; */

#define LINE_LEN 255

int main(void)
{
    char line[LINE_LEN];

    FILE* pFile = fopen("employee.txt", "r");
    fgets(line, LINE_LEN, pFile); //reads the first line of file, then pointer moves to next line
    printf("%s", line);




    
/* 
    double a[SIZE] = {1., 2., 3., 4., 5.};
    FILE *fp = fopen("test.bin", "wb"); // must use binary mode
    fwrite(a, sizeof *a, SIZE, fp);     // writes an array of doubles
    fclose(fp);

    double b[SIZE];
    fp = fopen("test.bin", "rb");
    size_t ret_code = fread(b, sizeof *b, SIZE, fp); // reads an array of doubles
    if (ret_code == SIZE)
    {
        puts("Array read successfully, contents: ");
        for (int n = 0; n < SIZE; ++n)
            printf("%f ", b[n]);
        putchar('\n');
    }
    else
    { // error handling
        if (feof(fp))
            printf("Error reading test.bin: unexpected end of file\n");
        else if (ferror(fp))
        {
            perror("Error reading test.bin");
        }
    }

    fclose(fp); */
    fclose(pFile);
    return 0;
}