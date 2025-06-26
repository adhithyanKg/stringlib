#include "stringlib.h"
#include "config.h"

#ifdef RUN_MAIN

int main()
{
    char string[] = "Albe i eblA";
    char tempBuffer[100];
    
    strcpy(tempBuffer, string);

    printf("Number of words in the string %d\n", wordCount(string));
    printf("Last Character Index  %d\n", findLastCharacterIndex(string, 't'));
    printf("First Character Index  %d\n", findFirstCharacterIndex(string, 't'));
    
    convertToUpperCase(tempBuffer);
    printf("String in Uppercase %s\n", tempBuffer);
    convertToLowerCase(tempBuffer);
    printf("String in Lowercase %s\n", tempBuffer);
    
    printf("Number of spaces in the string %d\n", countSpace(string));
    printf("Number of vowels in the string %d\n", countVowelsInTheString(string));
    
    printf("Occurence of the character '%c' without case sensitive is %d\n", 'a', countCharacterIgnoreCaseSensitive(string, 'a'));
    printf("Occurence of the character '%c' with case sensitive is %d\n", 'a', countCharacterCaseSensitive(string, 'a'));
    
    char *reverse = reverseString(string);
    printf("Originial string: %s --> Reversed string: %s\n", tempBuffer, reverse);
    free(reverse);
    
    printf("Is string '%s' palindrome? %s\n", string, isPalindrome(string) ? "yes" : "no");
    
    return 0;
}

#endif
