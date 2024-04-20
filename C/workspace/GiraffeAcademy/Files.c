#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // FILE *ptrFile = fopen("employees.txt", "w");  // opens file stored at ptrFile to write to
    // if file not created, file will be created at time of program execution
    // if there is no relative pathto file included in fopen, fopen assumes file is in same directory as c file
    // "w" = writing to file
    // "a" = appending to end of file
    // "r" = reading a file

    //fprintf(ptrFile, "Jim, Salesman\nPam, Receptionist\n");  /// fprintf function allows to write/append to a file
    //fprintf(ptrFile, "overridden\n");  /// 2nd use of fprintf function with write over writes a file


    // FILE *ptrFile = fopen("employees.txt", "a");  // opens file stored at ptrFile to append to

    // fprintf(ptrFile, "Ivan, Part-time Student\n");  /// fprintf function allows to write/append to a file

    char line[255];
    FILE *ptrFile = fopen("employees.txt", "r");  // opens file stored at ptrFile to read from

    fgets(line, 255, ptrFile);   // fgets function allows to read one line from a file then places ptr to after line that was read
    printf("%s", line);

    fgets(line, 255, ptrFile);   // 2nd use of fgets function reads next line from file then places ptr to after 2nd line that was read
    printf("%s", line);

    fclose(ptrFile);

    return 0;
}