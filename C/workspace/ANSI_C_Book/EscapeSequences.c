#include <stdio.h>

/* Instructions to run program on the command line
1. Compile c program and name the executable(output file name): "gcc filename.c –o filename"
   -> -o option is used to specify the output file name, if you do not use this option, then an
      output file with the name a.out is generated.
2. Run the executable: "./filename"
*/

int main()
{
    // Examples of escape sequences
    printf("Hello, world!\n");     // \n, newline character
    printf("\tHello, world!\n");   // \t, tab, prints "        Hello, world!"
    printf("Hello, \bworld!\n");   // \b, backspace, prints "Hello,world!"
    printf("Double quote: \"\n");  // \", double quote, prints "Double quote: ""
    printf("Backslach: \\\n");     // \\, backslash, prints "Backslash: \"

    return 0;
}