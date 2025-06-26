#include <ctype.h>
#include "stringlib.h"

int wordCount(const char* string)
{
	int count = 0;
	int inWord = 0;

	while (*string)
	{
		if (!isspace((unsigned char)*string)) {
			if (!inWord) {
				count++;
				inWord = 1;
			}
		} else {
			inWord = 0;
		}
		string++;
	}

	return count;
}

int countVowelsInTheString(const char* string)
{
	int count = 0;

	while(*string)
	{

		char c = tolower(*string);
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			count++;

		string++;

	}

	return count;
}

/* caller must call free() */
char* reverseString(const char* string)
{
	if(string == NULL) return NULL;

	int stringLength = strlen(string);
	char* reversed = malloc (stringLength+1);

	reversed[stringLength] = '\0';

	while(stringLength > 0 && *string)
	{
		reversed[stringLength-1] = *string;
		stringLength--;
		string++;
	}

	return reversed;
}

bool isPalindrome(const char* string)
{
	bool result = false;
	char* reverse = reverseString(string);
	if(reverse == NULL)
		return result;

	result = (strcmp(reverse, string) == 0);

	free(reverse);
	return result;
}

int countSpace(const char* string)
{
	int count = 0;

	while(*string)
	{
		if(isspace((unsigned char)*string))
			count++;
		string++;
	}
	return count;
}

/* returns 0 based index value */
static int findCharacterIndex(const char* string, char c, bool isFirstIndex)
{
	int index = -1;
	if(string == NULL)
		return -1;

	for(int i=0; string[i] != '\0'; i++)
	{
		if(string[i] == c)
		{
			if(isFirstIndex)
				return i;
			index = i;
		}

	}

	return index;
}

int findFirstCharacterIndex(const char* string, char c)
{
	return findCharacterIndex(string, c, true);
}

int findLastCharacterIndex(const char* string, const char c)
{
	return findCharacterIndex(string, c, false);
}

void convertToLowerCase(char* string)
{
    if(!string) return; 
    while(*string)
    {
        *string = tolower(*string);
        string++;
    }
}

void convertToUpperCase(char* string)
{
    if(!string) return;
    while(*string)
    {
        *string = toupper(*string);
        string++;
    }
}

static int countCharacter(const char* string, char c, bool isIgnoreCaseSensitive)
{
    int count = 0;  
    if(string == NULL)
        return count;
    
    while(*string)
    {
        if(isIgnoreCaseSensitive)
        {
            if(tolower((unsigned char)c) == tolower((unsigned char)*string))
            count++;
        }
        else
        {
            if((unsigned char)c == (unsigned char)*string)
            count++;
        }
        
            
        string++;
    }
    
    return count;
}

int countCharacterCaseSensitive(const char* string, char c)
{
    return countCharacter(string, c, false);
}

int countCharacterIgnoreCaseSensitive(const char* string, char c)
{
    return countCharacter(string, c, true);
}
