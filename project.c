/*
Name: Lee Chin Yang
Admin No: 1402832H
Class: TE08
*/

#include<stdio.h>
#include<conio.h>

void main(void)

{
	//Define variables
	char input;
	int x, time;
	//Variables for regions
	extern int north[]; //North Region
	extern int south[]; //South Region
	extern int east[]; //East Region
	extern int west[]; //West Region
	extern int central[]; //Central Region
	extern char systemId[];
	extern char userId[];
	extern char systemPwd[];
	extern char userPwd[];
	int status;
	//End of definition
	while (1)
	{
		puts("Enter user ID.\n");
		do
		{
			getId(userId);
			status = chkId(userId);
			if (status == 0) puts("\nIncorrect user ID, try again.\n");

		} while (status == 0);
		//Password 
		puts("\nEnter 6-digit password.\n");
		do
		{
			getPwd(userPwd); // calls function which saves user entry to userPwd[]
			status = chkPwd(userPwd); // calls function to check if userPwd[] is correct
			if (status == 0) puts("\nIncorrect password, try again.\n");
		} while (status == 0); // allow multiple (unlimited) attempts
		puts("\n");

		do
		{
			//Notice user of inputs
			menu();
			input = getch();

			//Path of selection
			switch (input)
			{
			case'1':

				//Function Call
				psi();
				break;

			case'2':

				//Function Call
				average();
				break;

			case'3':

				//Function Call
				worst();
				break;

			case'q':
			case'Q':

				input = 'q';
				puts("\n");
				break;

			default: puts("\nInvalid key input.\n");
			}
		} while (input != 'q');
	}
}
