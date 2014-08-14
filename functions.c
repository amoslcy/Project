/*
Name: Lee Chin Yang
Admin No: 1402832H
Class: TE08
*/

#include<stdio.h>

//Define variables
char input;
int x, time;
//Variables for regions
extern int north[]; //North Region
extern int south[]; //South Region
extern int east[]; //East Region
extern int west[]; //West Region
extern int central[]; //Central Region

extern char systemId[];// user ID

extern char systemPwd[];// user password

/*
<51 = Good
<101 = Moderate
<201 = Unhealthy
<301 = Very Unhealthy
>300 = Hazardous
*/ // Descriptors


void menu(void)
{
	printf("\nPlease enter your input .\n");
	printf("1) To get PSI reading of a certain area at a certain time.\n");
	printf("2) To get three hourly average PSI reading.\n");
	printf("3) To get the most unhealthy region for a given day and time.\n");
	printf("Q) To log off from programme.\n");
}

void psi(void)
{
	//Get Variables
	printf("\n");
	printf("\nPlease enter the time .\n");
	printf("\n0> 1am\n1> 2am\n2> 3am\n3>4am\n.\n.\n.\n23>12am\n");
	scanf("%d", &time);
	printf("\nPlease enter region .\n");
	printf("1 for North .\n");
	printf("2 for South .\n");
	printf("3 for East .\n");
	printf("4 for West .\n");
	printf("5 for Central .\n");
	scanf("%d", &x);
	printf("\n");

	if (x == 1)
	{
		printf("The PSI level for North is %d .\n", north[time]);

		if (north[time] < 51)
		{
			printf("This is a good level .\n");
		}
		else if (north[time] < 101)
		{
			printf("This is a moderate level .\n");
		}
		else if (north[time] < 201)
		{
			printf("This is an unhealthy level , please avoid going out .\n");
		}
		else if (north[time])
		{
			printf("This is a very unhealthy level , please avoid going out .\n");
		}
		else if (north[time])
		{
			printf("This is a hazardous level , please remain indoors .\n");
		}
	}
	else if (x == 2)
	{
		printf("The PSI level for South is %d .\n", south[time]);

		if (south[time] < 51)
		{
			printf("This is a good level .\n");
		}
		else if (south[time] < 101)
		{
			printf("This is a moderate level .\n");
		}
		else if (south[time] < 201)
		{
			printf("This is an unhealthy level , please avoid going out .\n");
		}
		else if (south[time])
		{
			printf("This is a very unhealthy level , please avoid going out .\n");
		}
		else if (south[time])
		{
			printf("This is a hazardous level , please remain indoors .\n");
		}
	}
	else if (x == 3)
	{
		printf("The PSI for East is %d .\n", east[time]);

		if (east[time] < 51)
		{
			printf("This is a good level .\n");
		}
		else if (east[time] < 101)
		{
			printf("This is a moderate level .\n");
		}
		else if (east[time] < 201)
		{
			printf("This is an unhealthy level , please avoid going out .\n");
		}
		else if (east[time])
		{
			printf("This is a very unhealthy level , please avoid going out .\n");
		}
		else if (east[time])
		{
			printf("This is a hazardous level , please remain indoors .\n");
		}
	}
	else if (x == 4)
	{
		printf("The PSI for West is %d .\n", west[time]);

		if (west[time] < 51)
		{
			printf("This is a good level .\n");
		}
		else if (west[time] < 101)
		{
			printf("This is a moderate level .\n");
		}
		else if (west[time] < 201)
		{
			printf("This is an unhealthy level , please avoid going out .\n");
		}
		else if (west[time])
		{
			printf("This is a very unhealthy level , please avoid going out .\n");
		}
		else if (west[time])
		{
			printf("This is a hazardous level , please remain indoors .\n");
		}
	}
	else if (x == 5)
	{
		printf("The PSI for Central is %d .\n", central[time]);

		if (central[time] < 51)
		{
			printf("This is a good level .\n");
		}
		else if (central[time] < 101)
		{
			printf("This is a moderate level .\n");
		}
		else if (central[time] < 201)
		{
			printf("This is an unhealthy level , please avoid going out .\n");
		}
		else if (central[time])
		{
			printf("This is a very unhealthy level , please avoid going out .\n");
		}
		else if (central[time])
		{
			printf("This is a hazardous level , please remain indoors .\n");
		}
	}
	else if (x != 1 && x != 2 && x != 3 && x != 4 && x != 5)
	{
		printf("\nInvalid key input.\n");
	}
}

void average(void)
{
	//Get Variables
	printf("\n");
	printf("\nPlease enter the time .\n");
	printf("1) 12AM - 3AM .\n");
	printf("2) 3AM - 6AM .\n");
	printf("3) 6AM - 9AM .\n");
	printf("4) 9AM - 12PM .\n");
	printf("5) 12PM - 3PM .\n");
	printf("6) 3PM - 6PM .\n");
	printf("7) 6PM - 9PM .\n");
	printf("8) 9PM - 12AM .\n");
	scanf("%d", &time);
	printf("\n");
	printf("\nPlease enter region .\n");
	printf("1 for North .\n");
	printf("2 for South .\n");
	printf("3 for East .\n");
	printf("4 for West .\n");
	printf("5 for Central .\n");
	scanf("%d", &x);
	printf("\n");

	if (x == 1)
	{
		if (time == 1)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 77 .\n");
		}
		else if (time == 2)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 77 .\n");
		}
		else if (time == 3)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 77 .\n");
		}
		else if (time == 4)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 77 .\n");
		}
		else if (time == 5)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 60.6 .\n");
		}
		else if (time == 6)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 55.7 .\n");
		}
		else if (time == 7)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 53.7 .\n");
		}
		else if (time == 8)
		{
			printf("\n");
			printf("3 Hourly Average for North Region is 52 .\n");
		}
	}
	else if (x == 2)
	{
		if (time == 1)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 59 .\n");
		}
		else if (time == 2)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 58 .\n");
		}
		else if (time == 3)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 57.7 .\n");
		}
		else if (time == 4)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 57 .\n");
		}
		else if (time == 5)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 56.7 .\n");
		}
		else if (time == 6)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 56.7 .\n");
		}
		else if (time == 7)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 56 .\n");
		}
		else if (time == 8)
		{
			printf("\n");
			printf("3 Hourly Average for South Region is 56.7 .\n");
		}
	}
	else if (x == 3)
	{
		if (time == 1)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 53 .\n");
		}
		else if (time == 2)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 52.3 .\n");
		}
		else if (time == 3)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 52 .\n");
		}
		else if (time == 4)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 52 .\n");
		}
		else if (time == 5)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 52 .\n");
		}
		else if (time == 6)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 52 .\n");
		}
		else if (time == 7)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 52.3 .\n");
		}
		else if (time == 8)
		{
			printf("\n");
			printf("3 Hourly Average for East Region is 54 .\n");
		}
	}
	else if (x == 4)
	{
		if (time == 1)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 69.7 .\n");
		}
		else if (time == 2)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 67.7 .\n");
		}
		else if (time == 3)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 67.7 .\n");
		}
		else if (time == 4)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 67.3 .\n");
		}
		else if (time == 5)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 67 .\n");
		}
		else if (time == 6)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 64.7 .\n");
		}
		else if (time == 7)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 60.3 .\n");
		}
		else if (time == 8)
		{
			printf("\n");
			printf("3 Hourly Average for West Region is 56.3 .\n");
		}
	}
	else if (x == 5)
	{
		if (time == 1)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 56.7 .\n");
		}
		else if (time == 2)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 55.7 .\n");
		}
		else if (time == 3)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 55 .\n");
		}
		else if (time == 4)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 54 .\n");
		}
		else if (time == 5)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 54 .\n");
		}
		else if (time == 6)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 53 .\n");
		}
		else if (time == 7)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 52 .\n");
		}
		else if (time == 8)
		{
			printf("\n");
			printf("3 Hourly Average for Central Region is 52 .\n");
		}
	}
	else if (x != 1 && x != 2 && x != 3 && x != 4 && x != 5)
	{
		printf("\nInvalid key input.\n");
	}
}

void worst(void)
{
	//Get Variables
	printf("\n");
	printf("\nPlease enter the time .\n");
	printf("\n0> 1am\n1> 2am\n2> 3am\n3>4am\n.\n.\n.\n23>12am\n");
	scanf("%d", &time);
	printf("\n");

	if (time == 0)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 1)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 2)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 3)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 4)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 5)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 6)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 7)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 8)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 9)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 10)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 11)
	{
		printf("The most unhealty region for this timing is North .\n");
	}
	else if (time == 12)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 13)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 14)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 15)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 16)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 17)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 18)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 19)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 20)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 21)
	{
		printf("The most unhealty region for this timing is West .\n");
	}
	else if (time == 22)
	{
		printf("The most unhealty region for this timing is South .\n");
	}
	else if (time == 23)
	{
		printf("The most unhealty region for this timing is South .\n");
	}
}

void getId(char*id)
{
	int j;
	char input;
	for (j = 0; j < 8; j++)
	{
		input = getch();
		if (input == '\r') break;
		putch(input);
		id[j] = input;
	}
	id[j] = NULL;
}

void chkId(char*id)
{
	int j, status;
	j = 0;
	status = 1;
	do
	{
		if (systemId[j] != id[j]) status = 0;
		j++;
	} while (j < 8 && status == 1);
	return status;
}

void getPwd(char* pwd) // updates array whose address is the input parameter
{
	int j;
	char input; // declare memory to store keyboard input
	for (j = 0; j<8; j++)
	{
		input = getch(); // get a character from keyboard and store to input
		if (input == '\r') break; // <enter> key returns ‘\r’ for getch(), ‘\n’ for getchar()
		putch('*'); // display the * character
		pwd[j] = input; // save to pwd[j]
	}
	pwd[j] = NULL; // append NULL character after the 6 character inputs
}

int chkPwd(char* pwd) // checks systemPwd[] with the array whose address passed in
{
	int j, status;
	j = 0;
	status = 1; // assume password is correct
	do
	{
		if (systemPwd[j] != pwd[j]) status = 0; // if corresponding elements don’t match
		j++;
	} while (j<8 && status == 1); // keep checking if corresponding characters match
	return status;
}
