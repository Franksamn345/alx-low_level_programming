#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8 
/** 
 * numValidCharacters-Define the desired password length
 * Return: 0success
 */
char generateRandomCharacter() 
{
	const char validCharacters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@?#&";
	int numValidCharacters = sizeof(validCharacters) - 1;
	return validCharacters[rand() % numValidCharacters];
}

void generateRandomPassword(char *password)
{
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generateRandomCharacter();
	}

	password[PASSWORD_LENGTH] = '\0';
}

int main()
{
	srand(time(NULL));
	char password[PASSWORD_LENGTH + 1];
	generateRandomPassword(password);

	printf("Random Password: %s\n", password);

	return 0;
}
