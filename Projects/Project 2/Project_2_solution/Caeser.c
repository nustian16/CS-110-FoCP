/*****************************************
 *                                       *
 *  Name:   Muhammad Rizwan keyhalid       *
 *  Reg.No: 180459                       *
 *  Class:  BSCS-6A                      *
 *  IDE:    CodeBlockeys                   *
 *                                       *
 *****************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// Prototypes of the functions.
void Encrypt(int, char array[]);
void Decrypt(int, char array[]);
void main()
{
	char array[1000];
	int choice, key;
	printf("Enter Message: ");
	gets(array);    // User inputs the message array.
	start:
	printf("\n\t\t\tPress '1' to Encrypt the message.\n\t\t\tPress '2' to Decrypt the message.\n\t\t\tPress '3' for quit\n");
	printf("Your Choice: ");// User enter the choice whether he wanted to encrypt or decrypt the message.
	scanf("%d", &choice);
	while (choice != 3) {

		if (choice == 1) {  // If user enters 1 then message will be encrypted according to the keyeystream entered
			printf("Enter the value of keyeystream in range (1-25): ");
			scanf("%d", &key);
			if(key > 25 || key <= 0){
                printf("You have entered an invalid keyeystream\n");
                goto start;
			}
			Encrypt(key, array);  // Function Calling.
			printf("Your Encrypted message is:\n\n\t\t%s", array);
		}

		if (choice == 2) {  // If user enters 2 then message will be decrypted according to the keyeystream entered
			printf("Enter the value of keyeystream in range (1-25): ");
			scanf("%d", &key);
			if(key > 25 || key <= 0){
                printf("You have entered an invalid keyeystream\n");
                goto start;
			}
			Decrypt(key, array);  // Function Calling
			printf("\nYour Decrypted message is:\n\n\t\t%s", array);
		}

		printf("\n\n\t\t\tPress '1' to Encrypt the message.\n\t\t\tPress '2' to Decrypt the message.\n\t\t\tPress '3' for quit\n");
		printf("Your Choice: ");
		scanf("%d", &choice);
	}

	system("pause");
}

void Encrypt(int key, char array[])
//Encrypt Function shifts the every alphabet of array key times forward to generate new Encrypted array.
{
	int i;
	for (i = 0; array[i] != '\0'; i++) {
		if (array[i] >= 'A' && array[i] <= 'Z') {  // Dealing with ASCII code representing A-Z for 65-90
			if (array[i] + key > 'Z') {
				array[i] = array[i] - 26;
			}
			array[i] = array[i] + key;
		}
		if (array[i] >= 'a' && array[i] <= 'z') { // Dealing with ASCII code representing a-z for 97-122
			if (array[i] + key > 'z') {
				array[i] = array[i] - 26;
			}
			array[i] = array[i] + key;
		}
	}
}

void Decrypt(int key, char array[])
// Decrypt function shifts the every alphabet of encrypted array key times backeyward to generate the original array inputed by the user.
{
	int i;
	key = (-1) * key;
	for (i = 0; array[i] != '\0'; i++) {
		if (array[i] >= 'A' && array[i] <= 'Z') {  // Dealing with ASCII code representing A-Z for 65-90
			if (array[i] + key < 'A') {
				array[i] = array[i] + 26;
			}
			array[i] = array[i] + key;
		}
		if (array[i] >= 'a' && array[i] <= 'z') {  // Dealing with ASCII code representing a-z for 97-122
			if (array[i] + key < 'a') {
				array[i] = array[i] + 26;
			}
			array[i] = array[i] + key;
		}
	}
}
