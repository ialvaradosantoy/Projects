#include <stdio.h>

/* Instructions to run program on the command line
1. Compile c program and name the executable(output file name): "gcc filename.c –o filename"
   -> -o option is used to specify the output file name, if you do not use this option, then an
      output file with the name a.out is generated.
2. Run the executable: "./filename"
*/

// using C input and output functions

int main()
{
    // copy character input to output, version 1
    /*
    int c;  // declared as integer so it can be big enough to hold any value that getchar returns and the  
            // value of EOF, which does not fit in a char type.

    c = getchar();  // getchar() reads one character
    while(c != EOF)  // // EOF (end of file) is a value that getchar() returns when there is no more input.
    {
        putchar(c);  // putchar() prints one character
        c = getchar();
        
    }
    */

    // copy character input to output, version 2 (more concise)
    int c;
    while((c = getchar()) != EOF)
    {
        putchar(c);
    }

    return 0;
}