#include "compile.h"

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        printf("Please enter a name of file!\n");
        return 0;
    }
    create_am_file(*file_name)
    compile_files(argv, argc);
    return 0;
}

void create_am_file(char *file_name)
{
    FILE *fptr1, *fptr2;
    char filename[MAXIMUM_FILE_NAME];
    char filename2[MAXIMUM_FILE_NAME];
    char c;
    strcpy(filename2, filename);

    /* Open one file for reading*/
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }


    /* Open another file for writing */
    fptr2 = fopen(filename2, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename2);
        exit(0);
    }

    /* Read contents from file */
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    fclose(fptr1);


    fclose(fptr2);
}

