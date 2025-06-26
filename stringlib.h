#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int wordCount(const char* string);
int countVowelsInTheString(const char* string);
char* reverseString(const char* string);
bool isPalindrome(const char* string);
int countSpace(const char* string);
static int findCharacterIndex(const char* string, char c, bool isFirstIndex);
int findFirstCharacterIndex(const char* string, const char c);
int findLastCharacterIndex(const char* string, const char c);
void convertToLowerCase(char* string);
void convertToUpperCase(char* string);
static int countCharacter(const char* string, char c, bool isNotCaseSensitive);
int countCharacterIgnoreCaseSensitive(const char* string, char c);
int countCharacterCaseSensitive(const char* string, char c);
