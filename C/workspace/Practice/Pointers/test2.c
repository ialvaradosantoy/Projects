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
    
    int position = 45;
    int inode_block = 2;
    int inode_block_position = position / inode_block;
    printf("position: %d\n", position);
    printf("inode block: %d\n", inode_block);
    printf ("inode_block_position: %d\n\n", inode_block_position);

    // position = 30;
    // inode_block = 1;
    // inode_block_position = position / inode_block;
    // printf("position: %d\n", position);
    // printf("inode block: %d\n", inode_block);
    // printf ("inode_block_position: %d\n\n", inode_block_position);

    // position = 31;
    // inode_block = 1;
    // inode_block_position = position / inode_block;
    // printf("position: %d\n", position);
    // printf("inode block: %d\n", inode_block);
    // printf ("inode_block_position: %d\n\n", inode_block_position);

    // position = 32;
    // inode_block = 1;
    // inode_block_position = position / inode_block;
    // printf("position: %d\n", position);
    // printf("inode block: %d\n", inode_block);
    // printf ("inode_block_position: %d\n\n", inode_block_position);

    // if (1)
    // {
    //     printf("if statement\n");
    // }
    // else {
    //     printf("else statement\n");
    // }
    // printf("rest statement\n");
}