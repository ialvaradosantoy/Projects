#include <stdio.h>

typedef union { // All fields in a union are co-located in same space
	int i;
	float f;
} intfloat;

void print_iee754_fields(intfloat i)
{
	printf("val: %f, s: %d, be: %d, ue: %d, m: %x\n", 
			(i.f), (i.i >> 31) & 0x1, (i.i >> 23) &0xff,
			 ((i.i >> 23) & 0xff) - 127, i.i & 0x007fffff);

}

void print_bits(int i)
{
	int k;

	for (k =31; k >= 0; k--)
	{
		printf("%d", (i >> k) & 1);
	}
	printf("\n");
}

int main (int argc, char * argv[])
{
	intfloat i;
	int j = 1;

	i.f = 1.5;
	
	printf("%d %f\n", i.i, i.f);
	print_bits(i.i);
	print_iee754_fields(i);

	for (i.f = 0;; i.f += 2) 
	{
		if (i.f == 1 << j)
		{
			print_iee754_fields(i);
			j++;
		}
		
	}

	return 0;
}