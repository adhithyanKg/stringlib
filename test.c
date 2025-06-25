#include <assert.h>
#include "stringlib.h"

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
    assert(countVowelsInTheString("Adhithyan is great") == 6);
    assert(countVowelsInTheString("  Leading space") == 5);
    assert(countVowelsInTheString("Trailing space   ") == 5);
    assert(countVowelsInTheString("  Multiple   spaces   inside  ") == 8);
    assert(countVowelsInTheString("New\nLine\tand  spaces") == 6);
    
    printf("All countVowelsInTheString tests passed!\n");
}

int main()
{
    test_wordCount();
    
    test_countVowelsInTheString();
}
