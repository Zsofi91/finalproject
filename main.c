#include "compile.h"

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Please enter a name of file!\n");
        return 0;
    }
    compile_files(argv, argc);
    return 0;
}