//FileName:		cA1.c
//ProjectName:	cA1 - Assignment 1
//Author:		Alex Guerrero
//Date:			September 23, 2013
//Description:  This program displays the each letter of the alphabet on the left hand column
//				and an avgerage of the letters on the right hand column 
//				through the use of a running total.  If the letter 'A' has come across, 
//				print is numberical value.



//include file for input/output
#include<stdio.h>


//constant to hold my first initial 'a'
const char kFirstInitial = 'a';


int main(void)
{
	//variables initialized
	char letter = 97;
	int count = 1;
	int average = 0;
	int runningTotal = 0;

	//while the count is less than or equal to the limit of the 26 letters of the alphabet
	while (count <= 26)
	{
		//if letter holds the value of 'a'...
		if (letter == kFirstInitial)
		{
			//equation to generate a running total 
			runningTotal += letter;
			//equation to generate an average of the running total
			average = runningTotal / count;
			//prints a character and interger value to the screen
			printf("%c	%d\n", letter, average);
		}
		//otherwise, if the variable letter does not hold the value 97('a')...
		else
		{
			//equation to generate a running total
			runningTotal += letter;
			//equation to generate an average of the running total
			average = runningTotal / count;
			//prints a character and interger value to the screen
			printf("%c	%c\n", letter, average);
		}
		//preincrement letter and count
		++letter;
		++count;
	}


	return 0;
}