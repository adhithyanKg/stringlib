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
        
        if(*string == 'a' || *string == 'e' || *string == 'i' || *string == 'o' || *string == 'u' || 
           *string == 'A' || *string == 'E' || *string == 'I' || *string == 'O' || *string == 'U')
           count++;
           
        string++;
        
    }
    
    return count;
}
