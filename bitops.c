/*
*******************************************************************************************************************************************
 *Purpose/Description:      This program asks the user for a number between 1 and 1000. Then it asks if he wants to set or clear a bit, 
			and the position of that bit. Finally, the program performs the operations desired by the user, shows him the 
			results, and asks him if he wants to repeat the entire operation. The program uses an array of characters to 
			receive user input and thus avoid breaking with incompatible data types. In conclusion, it is a simple program 
			that only does operations with bits.
 * Author’s Name: Jose Aparicio
 * Author’s Panther ID: 6186111 
 * Certification: I hereby certify that this work is my own and none of it is the work of any other person.
*********************************************************************************************************************************************
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define arraySize 7										//defining a size for the array to get input from user


int  main()											//main function
{
	unsigned int input=0;									//variable to store the number entered by the user                    
	char stringInput[arraySize];                                                            //char array to store input from user without breaking the program
	int setFlag;										//integer to be use as boolean, used to know if we have to set or clear a bit
	int bit;										//to store the position of the bit to be manipulated

	do{                                                                                     //do-while loop to repeat the entire process
		int loop=1;									//int to be use in the condition of the following loop
		while(loop==1){									//while loop to loop until a correct value is entered
			printf("Enter a number: ");						//asking the user for a number
			scanf("%s",&stringInput);						//scanning the input as a string to avoid breaking the program with the input
			input=(unsigned)atoi(stringInput);					//converting the string to an usingned integer
			(input>(unsigned)0 && input<=(unsigned)1000)?loop=0:printf("Please enter a number between 1 and 1000.\n");    //validating the input
		}

		while(1){									//while loop to loop until the correct option is entered
			printf("What to you want to do? Enter \"clear\" or \"set\".\n");	//asking the user
			scanf("%s",stringInput);						//scaning the input
			if(strcasecmp(stringInput,"clear")==0){					//detecting if the user entered "clear"
				setFlag=0;							//setting the setFlag to 0
				break;								//braking the loop
			}else if(strcasecmp(stringInput,"set")==0){				//detecting if the user entered "set"
				setFlag=1;							//setting the setFlag to 1
                                break;								//braking the loop
			}
		}
		while(1){									//while loop to loop until a correct value is entered
			printf("Enter the position of the bit to be changed\n");		//asking the user
			scanf("%d",&bit);							//scanning the input
			if(bit>=0 && bit<=31)							//validating the input
				break;								//braking the loop
			else
				printf("Enter a number between 0 and 31.\n");			//message for the user
		}
		printf("Before: %u ", input);							//printing the number before the changes 
		if(setFlag==0){
			input=(input & ~(1<<bit)) | ((0 << bit) & (1<<bit));			//clearing the bit
		}else if(setFlag==1){
			input=(input & ~(1<<bit)) | ((1 << bit) & (1<<bit));			//setting the bit
		}		
		printf("After: %u\n",input);							//printing the number after the changes
		printf("Do you want to do the entire operation again? Enter \'Y\' or \'y\' to do it again or anything else to quit the program.\n");	//asking the user if he wants to continue
		fgetc(stdin);									//cleaning stdin
		while(fgets(stringInput,arraySize,stdin)==NULL);				//scanning the input
			if(stringInput[0]!=89  && stringInput[0]!=121 )				//validating input
				break;								//breaking the loop
	}while(1);										//do-while loop
	return 0;										//returning
}
