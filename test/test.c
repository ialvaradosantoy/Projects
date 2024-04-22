#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

//global constants
#define NUM_INODES 8 //total number of inodes (files)
#define NUM_DBLOCKS 32 //total number of data blocks
#define NUM_POINTER 8 //total number of (direct) pointers for each inode; i.e., each file can have at most this number of data blocks
#define BLOCK_SIZE 32 //size of each data block (unit: byte)
#define NUM_OPEN_FILE 8 //maximum number of files that can be open at a time in the whole system
#define DEBUG 1 //1-enable debug, 0-disable debug prints

int main(void)
{
    int i = 2;
    int j = 1;
    int *p, *q, *r;

    p = &i;
    q = &i;

    if (p == q)
        printf ("p == q.\n");
    if (p != q)
        printf ("This won't be printed.\n");
    free(p);
    p = r;

    if (p == r)
        printf ("p == q.\n");
    if (p != r)
        printf ("This won't be printed.\n");
}