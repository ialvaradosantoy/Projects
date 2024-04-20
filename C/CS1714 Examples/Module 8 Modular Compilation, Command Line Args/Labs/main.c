#include <stdio.h>
#include "flights.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char buffer[1024];
	char userbuff[3];
	char origin[4];
	char dest[4];
	char airline[3];
	int passCount = 0;
	int flightCount = 0;
	int i = 0;
	FILE* inFile = NULL; // file pointer
	// Read in the name of the file through command line, if arg is not there print error messgae
	if (argc != 2)
	{
		printf("ERROR NO ARGS");
		return 1;
	}
	// Open file for reading, if file does not open print an error message
	inFile = fopen(argv[1], "r");
	if (inFile == NULL)
	{
		printf("ERROR FILE NOT OPEN");
		return 1;
	}
	// Dynamically allocate an array of 200 Flight struct objects
	Flight* flights;
	flights = (Flight*)malloc(NUM_FLIGHTS *sizeof(Flight));
	
	// Read file and parse the CSV int to the array
	while(fgets(buffer, 1024, inFile) != NULL)
	{
		sscanf(buffer, "%[^,],%[^,],%[^,],%d", origin, dest, airline, &passCount);
		strcpy(flights[i].origin, origin);
		strcpy(flights[i].destination, dest);
		strcpy(flights[i].airline, airline);
		flights[i].passengers = passCount;
		i++;
	}
	passCount = 0;
	printf("Enter a 2 letter airline code");
	scanf("%s", userbuff);
	
	for (i = 0; i < 200; i++)
	{
		if (strcmp(flights[i].airline, userbuff) == 0)
		{
			flightCount++;
			passCount = passCount + flights[i].passengers;	
		}
	} 
	printf("airline: %s\n", userbuff);
	printf("flights: %d\n", flightCount);
	printf("passengers: %d\n", passCount);
	fclose(inFile);
	free(flights);
	return 0;
}
