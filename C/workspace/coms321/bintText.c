#include <stdio.h>

union {
  int i;
  char s[4];  
} u;

int main(int argc, char *argv[])
{
    FILE *f;

    u.s[0] = '1';
    u.s[1] = '2';
    u.s[2] = '3';
    u.s[3] = '4';

    f = fopen("bintext.txt", "w");
    fwrite(&u, 4, 1, f);

    fclose(f);

    f= fopen("bintext.txt", "r");

    fscanf(f, "%d", &u.i);
    printf("%d\n", u.i);
    // fprintf(f, "%c%c%c%c\n", u.s[0], u.s[1], u.s[2], u.s[3]);

    fclose(f);

    f= fopen("bintext.txt", "r");

    fread(&u, 4, 1, f);

    printf("%d\n", u.i);
    //fprintf("%c%c%c%c\n", u.s[0], u.s[1], u.s[2], u.s[3]);

    fclose(f);

    return 0;
}