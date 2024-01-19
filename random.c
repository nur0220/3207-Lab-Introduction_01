#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
	int randomInt = rand() % ('z' - 'a' + 1) + 'a';

	char randomChar = (char)randomInt;

	return randomChar;

}