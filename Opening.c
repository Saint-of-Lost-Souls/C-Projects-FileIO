#include <stdio.h>
#include <stdlib.h>

// An abstract representation of any external source or destination for data
// Standard input, standard output, standard error
// File stream as text file
// File stream as binary file

int main()

{
    int is_ok = EXIT_FAILURE;
    const char *fname = "/tmp/unique_name.txt"; // or tmpnam(NULL);
    FILE *fp = fopen(fname, "w+");
    if (!fp)
    {
        perror("File opening failed");
        return is_ok;
    }
    fputs("Hello, world!\n", fp);
    rewind(fp);

    int c; // note: int, not char, required to handle EOF
    while ((c = fgetc(fp)) != EOF)
    { // standard C I/O file reading loop
        putchar(c);
    }

    if (ferror(fp))
    {
        puts("I/O error when reading");
    }
    else if (feof(fp))
    {
        puts("End of file reached successfully");
        is_ok = EXIT_SUCCESS;
    }

    fclose(fp);
    remove(fname);
    return is_ok;
}
