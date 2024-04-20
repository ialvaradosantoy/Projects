#include <stdio.h>
#include <string.h> // library containing string functions
#define MAX 50 // constant for length of strings 

/*
*	Palindrome- word or phrase that is the same when 
*	read fwd/backwd and ignoring spaces
*	This program reads a word or phrase from the user,
*	and ouputs whether the input is a palindrome or not.
*	Max length of input string is 50 characters
*/
int main(int argc, char* argv[]) {
	// declaring and initializing local variables;
	char str[MAX];
	char strTwo[MAX];
	char strThree[MAX];
	int i = 0;
	int j = 0;
	char a; // char used for temp char storage
	
    /* 
	*	reading one line of characters from user, and ends with 
	*	'\n'. If user inputs '\n' char, it is also read and function 
	*	appends a null char ('\0').
	*/
	fgets(str, MAX, stdin); 
	
	// seacrching for '\n' in str, if != NUll '\n' exists in str
	if (strchr(str, '\n') != NULL) { 
        //replace '\n' with '\0'
		for (i = 0; str[i] != '\0'; ++i) {
			if (str[i] == '\n') {
				str[i] = '\0';
			}
		}
	} 
    // seacrching for ' ' in str, if != NUll ' ' exists in str
	if (strchr(str, ' ') != NULL){
		// copying char's from str to strTwo excluding spaces
		for (i = 0; i < (strlen(str) + 1); ++i) {
			if (str[i] == ' ') {
				continue; 
			}
			else {
				strTwo[j] = str[i];
				j++;
			}
		}
		// copying strTwo to strThree
		strcpy(strThree, strTwo); 
		
		// reversing strThree 
		for (i = 0; i < (strlen(strThree) / 2); i++){
			a = strThree[i];
			strThree[i] = strThree[strlen(strThree) - 1 - i];
			strThree[strlen(strThree) - 1 - i] = a;
		}
		
		// comparing strTwo to strThree  
		if (strcmp(strTwo, strThree) == 0){
         printf("palindrome: %s\n", str);
		}
		else {
			printf("not a palindrome: %s\n", str);
		}
	}
	else{
		// copying str to strTwo
		strcpy(strTwo, str);
		
		// reversing strTwo
		for (i = 0; i < (strlen(strTwo) / 2); i++){
			a = strTwo[i];
			strTwo[i] = strTwo[strlen(strTwo) - 1 - i];
			strTwo[strlen(strTwo) - 1 - i] = a;
		}
        // comparing str to strTwo 
		if (strcmp(str, strTwo) == 0){
			printf("palindrome: %s\n", str);
		}
		else {
			printf("not a palindrome: %s\n", str);
		}
	}

	return 0;
}