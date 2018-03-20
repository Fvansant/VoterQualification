/*
	Author: Frank Van Sant
	Date: 10/22/2016
	Final Project Voter Qualification
*/
#include <stdio.h>
#include <stdlib.h>

int main (void)// begins main program
{
	//Declarations
	char userName[20];
	char userLastName[20];
	char userAge;
	char userCit;
	char userState;
	char userFelon;
	char userRights;
	char userComp;
	
	printf ("Please enter your first and last name.\n");
	scanf ("%s%[^\n]s", &userName, &userLastName);// accepts a single first name and multi-word last name
	printf ("Hello %s%s, I am going to ask you a series of Y or N questions to see if you qualify to vote today.\nLet's begin,", userName, userLastName);
	system ("pause");
	
	printf ("Are you eighteen (18) years of age or older?(Y/N)\n");//Even though Y and N are the prompted answers, yes and no work as well
	scanf ("%s", &userAge);
	
	if (userAge == 'y' || userAge == 'Y')// begins the logical AND statement of nested ifs
	{
		printf ("Are you a U.S. citizen?(Y/N)\n");
		scanf ("%s", &userCit);
		if (userCit =='y' || userCit =='Y')
		{
			printf ("Are you a resident of Virginia (VA)?(Y/N)\n");
			scanf ("%s", &userState);
			if (userState == 'y' || userState == 'Y')
			{
				printf ("Are you a convicted felon?(Y/N)\n");
				scanf ("%s", &userFelon);
				if (userFelon =='n' || userFelon == 'N')
				{
					printf ("Have you been deemed incompetent by a court of law?(Y/N)\n");
					scanf ("%s", &userComp);
					if (userComp =='n' || userComp =='N')
					{
						printf ("You ARE qualified to vote.\n");
					}
					else
					{
						printf ("You are NOT qualified to vote.\n");
					}//end if
				}
				else
				{
					printf ("Have you had your rights restored?(Y/N)\n");
					scanf ("%s", &userRights);
					if (userRights =='y' || userRights == 'Y')
					{
						printf ("Have you been deemed incompetent by a court of law?(Y/N)\n");
						scanf ("%s", &userComp);
						if (userComp =='n' || userComp =='N')
						{
							printf ("You ARE qualified to vote.\n");
						}
						else
						{
							printf ("You are NOT qualified to vote.\n");
						}//end if
					}
					else
					{
						printf ("You are NOT qualified to vote.\n");
					}//end if
				}//end if
			}
			else
			{
				printf ("You are NOT qualified to vote.\n");
			}//end if
		}
		else
		{
			printf ("You are NOT qualified to vote.\n");
		}//end if
	}
	else
	{
		printf ("You are NOT qualified to vote.\n");
	}//end if
	
	printf ("\n");//just for readability
	
	system ("pause");
	return 0;
}	

