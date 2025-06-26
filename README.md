# stringlib
**stringlib** is a lightweight and modular C library for performing essential string operations, including case conversion, character counting, string reversal, and palindrome checks.
Designed to be simple, reusable, and safe, this library provides core utilities commonly needed in C projects without relying on external dependencies or frameworks.

Whether you're building embedded systems, writing utilities, or learning C programming, stringlib helps you avoid boilerplate string handling code and focus on the logic that matters.

## Features
1. Minimal standard library dependencies
2. Works with any standard C compiler
3. Easy to extend
4. Test Driven Development Built-In

## List of supported functions
| Function Signature                                                                | Description                                                                                   |
|-----------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------|
| int wordCount(const char* string)                                                 | Returns the number of words in the given string.                                              |
| int countVowelsInTheString(const char* string)                                    | Returns the vowels (`a, e, i, o, u`) count present in the string (case-insensitive).          |
| char* reverseString(const char* string)                                           | Returns a newly allocated string that is the reverse of the input.                            |
| bool isPalindrome(const char* string)                                             | Checks if the string is a palindrome (reads the same forward and backward).                   |
| int countSpace(const char* string)                                                | Returns the number of whitespace characters (spaces) in the string.                           |
| int findFirstCharacterIndex(const char* string, const char c)`                    | Returns the index of the first occurrence of character, or -1 if not found.                   |
| int findLastCharacterIndex(const char* string, const char c)`                     | Returns the index of the last occurrence of character, or -1 if not found.                    |
| void convertToLowerCase(char* string)`                                            | Converts all alphabetic characters in the string to lowercase (in-place).                     |
| void convertToUpperCase(char* string)`                                            | Converts all alphabetic characters in the string to uppercase (in-place).                     |
| int countCharacterIgnoreCaseSensitive(const char* string, char c)`                | Returns count of specific character appears in the string (case-insensitive match).           |
| int countCharacterCaseSensitive(const char* string, char c)`                      | Returns count of specific character appears in the string (case-sensitive match).             |

## Code Structure
```
stringlib/
├── stringlib.c    # Implementation of string manipulation functions
├── stringlib.h    # Header file with function declarations
├── main.c         # Sample application (demonstrates usage)
├── test.c         # Test suite using assert
├── config.h       # Toggle between RUN_MAIN and RUN_TESTS
└── README.md      # Documentation (this file)
```

## Running Tests
1. Open config.h.
2. Enable unit test by uncommenting #define RUN_TESTS line.
3. Compile and run.
4. You will see Test results in the console.

## Running Application
1. Open config.h.
2. Enable main application by uncommenting #define RUN_MAIN line.
3. Compile and run.
4. You will see main application running in the console.

## How to use the Extended String Library
1. Download stringlib.h, stringlib.c and add it in your project.
2. Include stringlib.h in your application source file.
3. Refer main.c for method usage.

## Try it yourself!
Click the link here --> https://onlinegdb.com/PoZjDwgMS
