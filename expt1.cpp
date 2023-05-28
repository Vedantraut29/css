/*
//Name: Kaushik Shroff
//Batch: K-8
//Roll No: 32418
//Experiment No: 1

#include <iostream>
using namespace std;

int main()
{
	string password="admin1234";
	cout<<"Enter the default password"<<endl;
	string passin;
	getline(cin,passin); //get string input on op screen
	if(passin==password)
	{
		cout<<"Correct password"<<endl;
	}
	else
	{
		cout<<"Wrong password"<<endl;
	}
}*/

// Name: Kaushik Shroff
// Batch: K-8
// Roll No: 32418
// Experiment No: 1
// Code for displaying *
#include <stdio.h>
#include <conio.h>
int main()
{
	int i = 0;
	char password[55];
	char passin[55] = "admin";
	printf("Password:"); // vedant
	int p = 0;
	do
	{							 // to display (*)
		password[p] = getch();	 // hold the output screen for some time until the user passes a key from the keyboard to exit the console screen. Using getch() function, we can hide the input character provided by the users in the ATM PIN, password, etc.
		if (password[p] != '\r') // carriage return It tells the terminal emulator to move the cursor to the start of the line, not to the next line, like \n.
		{
			printf("*");
		}
		p++;
	} while (password[p - 1] != '\r');
	printf("\n");
	password[p - 1] = '\0'; // represents end of string
	for (i = 0; i < 6; i++)
	{
		if (passin[i] != password[i])
			break;
	}
	if (i == 6)
	{
		printf("Correct password\n");
	}
	else
	{
		printf("Wrong password\n");
	}
	getch();
}
