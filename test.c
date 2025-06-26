#include <assert.h>
#include "stringlib.h"
#include "config.h"

#ifdef RUN_TESTS
void test_wordCount() {
	assert(wordCount("") == 0);
	assert(wordCount("   ") == 0);
	assert(wordCount("Adhithyan") == 1);
	assert(wordCount("Adhithyan is great") == 3);
	assert(wordCount("  Leading space") == 2);
	assert(wordCount("Trailing space   ") == 2);
	assert(wordCount("  Multiple   spaces   inside  ") == 3);
	assert(wordCount("New\nLine\tand  spaces") == 4);

	printf("All wordCount tests passed!\n");
}

void test_countVowelsInTheString()
{
	assert(countVowelsInTheString("") == 0);
	assert(countVowelsInTheString("  ") == 0);
	assert(countVowelsInTheString("Adhithyan") == 3);
	assert(countVowelsInTheString("Adhithyan is GREAT") == 6);
	assert(countVowelsInTheString("  Leading space") == 5);
	assert(countVowelsInTheString("Trailing space   ") == 5);
	assert(countVowelsInTheString("  Multiple   spaces   inside  ") == 8);
	assert(countVowelsInTheString("New\nLine\tand  spaces") == 6);

	printf("All countVowelsInTheString tests passed!\n");
}

void test_reverseStringHelper(const char* expected, const char* input)
{
	char* result = reverseString(input);
	if(!result || strcmp(result, expected) != 0)
	{
		printf(
		    "Assertion failed:\n"
		    "  reverseString(\"%s\") \"%s\"\n"
		    "  Expected: \"%s\"\n",
		    input, result ? result : "NULL", expected);

		free(result);
		exit(1);
	}
	free(result);
}

void test_reverseString()
{

	test_reverseStringHelper("","");
	test_reverseStringHelper("A","A");
	test_reverseStringHelper("Da","aD");
	test_reverseStringHelper("taerG si nayhtihdA","Adhithyan is Great");
	test_reverseStringHelper("  ", "  ");

	printf("All reverseString tests passed!\n");

}

void test_isPalindrome()
{
	assert(isPalindrome("") == true);
	assert(isPalindrome(NULL) == false);
	assert(isPalindrome("aba") == true);
	assert(isPalindrome("adhithyan") == false);
	assert(isPalindrome("all is well") == false);
	assert(isPalindrome("Able was I ere I saw elbA") == true);
	assert(isPalindrome("Able was I ere I saw elba") == false);

	printf("All isPalindrome tests passed!\n");

}

void test_countSpace()
{
    assert(countSpace("") == 0);
    assert(countSpace(" ") == 1);
    assert(countSpace("  ") == 2);
    assert(countSpace(" A ") == 2);
    assert(countSpace(" all is well ") == 4);
    assert(countSpace("a\tb c\nd") == 3);
    assert(countSpace(" \t\n\r\v\f") == 6); 
    
    printf("All countSpace tests passed!\n");
    
}

void test_findFirstCharacterIndex()
{
    assert(findFirstCharacterIndex("",'A') == -1);
    assert(findFirstCharacterIndex("Ad",'A') == 0);
    assert(findFirstCharacterIndex("Adhithyan", 'h') == 2);
    assert(findFirstCharacterIndex("Adhithyan is great", 's') == 11);
    assert(findFirstCharacterIndex("abc", 'x') == -1);     
    assert(findFirstCharacterIndex(NULL, 'a') == -1);      
    assert(findFirstCharacterIndex("repeat", 'e') == 1);
    
    printf("All findFirstCharacterIndex tests passed!\n");
    
}

void test_findLastCharacterIndex()
{
    assert(findLastCharacterIndex("",'A') == -1);
    assert(findLastCharacterIndex("Ad",'A') == 0);
    assert(findLastCharacterIndex("Adhithyan", 'h') == 5);
    assert(findLastCharacterIndex("Adhithyan is great", 's') == 11);
    assert(findLastCharacterIndex("abc", 'x') == -1);     
    assert(findLastCharacterIndex(NULL, 'a') == -1);      
    assert(findLastCharacterIndex("repeat", 'e') == 3);
    
    printf("All findLastCharacterIndex tests passed!\n");
}

void test_convertToCaseHelper(bool isLowerCase, char* input, char* expected)
{
    if (!input && !expected)
    {
        if (isLowerCase)
            convertToLowerCase(NULL);
        else
            convertToUpperCase(NULL);
        return;
    }
    char testString[100];
    strcpy(testString, input);
    if(isLowerCase)
        convertToLowerCase(testString);
    else
        convertToUpperCase(testString);
    if(strcmp(testString, expected) != 0)
    {
        printf(
		    "Assertion failed:\n"
		    "  Converted String(\"%s\") \"%s\"\n"
		    "  Expected: \"%s\"\n",
		    input, testString ? testString : "NULL", expected);
		exit(1);
    }
    
}

void test_convertToLowerCase()
{
    test_convertToCaseHelper(true, "Adhi", "adhi");
    test_convertToCaseHelper(true, "ADHITHYAN", "adhithyan");
    test_convertToCaseHelper(true, "Adhi1234", "adhi1234");
    test_convertToCaseHelper(true, "hi", "hi");
    test_convertToCaseHelper(true, "@123!", "@123!");
    test_convertToCaseHelper(true, "Hello World @2025", "hello world @2025");
    test_convertToCaseHelper(true, "All is WELL", "all is well");
    test_convertToCaseHelper(true, NULL, NULL);
    test_convertToCaseHelper(true, "!@# $%^", "!@# $%^");
    
    printf("All convertToLowerCase tests passed!\n");
}

void test_convertToUpperCase()
{
    test_convertToCaseHelper(false, "Adhi", "ADHI");
    test_convertToCaseHelper(false, "ADHITHYAN", "ADHITHYAN");
    test_convertToCaseHelper(false, "Adhi1234", "ADHI1234");
    test_convertToCaseHelper(false, "hi", "HI");
    test_convertToCaseHelper(false, "@123!", "@123!");
    test_convertToCaseHelper(false, "Hello World @2025", "HELLO WORLD @2025");
    test_convertToCaseHelper(false, "All is WELL", "ALL IS WELL");
    test_convertToCaseHelper(false, NULL, NULL);
    test_convertToCaseHelper(false, "!@# $%^", "!@# $%^");
    
    printf("All convertToUpperCase tests passed!\n");
}

void test_countCharacterCaseSensitive()
{
    assert(countCharacterCaseSensitive("",'a') == 0);
    assert(countCharacterCaseSensitive("aba",'a') == 2);
    assert(countCharacterCaseSensitive("aAb",'a') == 1);
    assert(countCharacterCaseSensitive("adhithyan",'h') == 2);
    assert(countCharacterCaseSensitive("all is well",'l') == 4);
    assert(countCharacterCaseSensitive(NULL,'a') == 0);
    assert(countCharacterCaseSensitive("Adhithyan is great",'g') == 1);
    
    printf("All countCharacterCaseSensitive tests passed!\n");
}

void test_countCharacterIgnoreCaseSensitive()
{
    assert(countCharacterIgnoreCaseSensitive("",'a') == 0);
    assert(countCharacterIgnoreCaseSensitive("aba",'a') == 2);
    assert(countCharacterIgnoreCaseSensitive("aAb",'a') == 2);
    assert(countCharacterIgnoreCaseSensitive("adhithyan",'h') == 2);
    assert(countCharacterIgnoreCaseSensitive("ALL is well",'l') == 4);
    assert(countCharacterIgnoreCaseSensitive(NULL,'a') == 0);
    assert(countCharacterIgnoreCaseSensitive("Adhithyan is great",'A') == 3);
    
    printf("All countCharacterIgnoreCaseSensitive tests passed!\n");
}

int main()
{
	test_wordCount();

	test_countVowelsInTheString();

	test_reverseString();

	test_isPalindrome();
	
	test_countSpace();
	
	test_findFirstCharacterIndex();

    test_findLastCharacterIndex();
    
    test_convertToLowerCase();
    
    test_convertToUpperCase();
    
    test_countCharacterIgnoreCaseSensitive();
    
    test_countCharacterCaseSensitive();
    
	return 0;
}
#endif
