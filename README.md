# C Basics Workshop
**[SLIDES](https://docs.google.com/presentation/d/16rmg1Oifnsbdf33-vSmG6IgTEbmdf4l17njAq7KKY5w/edit#slide=id.g2c43ede4a78_0_10)**
## Installation
Check if they can run the `cc` or `gcc` commands.
## Introduction: creation and history (3mn)
- The C programming language was created by Dennis Ritchie in 1972.
- There were no "A" or "B" programming languages that directly preceded C. However, B was indeed a precursor to C. B was derived from BCPL (Basic Combined Programming Language)
- C was initially created for internal use at Bell Laboratoies, C offered a good balance between high-level abstraction and low-level control
- C's combination of portability, efficiency, and support for structured programming made it revolutionary and paved the way for modern systems programming languages.

## Low level vs high level / C vs Ruby (10 mn)
- high-level programming languages prioritize ease of use, while low-level programming languages offer more direct control
- Examples of languages of various levels:
1. **Low-Level Programming Languages**:
   - **Assembly Language**: Assembly languages are specific to a particular computer architecture and are essentially a symbolic representation of machine code instructions.
   - **C**: While C is often considered a mid-level language, it is also quite low-level because of its close relationship with the hardware, providing features like direct memory manipulation and pointer arithmetic.
   - **Machine Code**: This is the lowest level, consisting of binary instructions directly executable by the CPU.

2. **Mid-Level Programming Languages**:
   - **C++**: Building upon C, C++ introduces object-oriented programming features while maintaining compatibility with C.
   - **Java**
   - **Python**: Python is considered mid-level because it offers high-level abstractions while still allowing some control over low-level details. It's known for its simplicity and readability.

3. **High-Level Programming Languages**:
   - **JavaScript**: Often used for web development, JavaScript is a high-level language that runs in web browsers, providing dynamic functionality to web pages.
   - **Ruby**: Known for its simplicity and productivity, Ruby is a high-level language commonly used for web development and scripting.
   - **Swift**: Developed by Apple, Swift is a high-level language used for iOS, macOS, watchOS, and tvOS app development. It's designed to be modern, safe, and expressive.

## Writting our first program in C "Hello World!"
> note: Exercie in folder **1-HelloWorld**
- In C, you have to explicitly define a main function as the entry point, whereas in Ruby, you directly write your code.
- C requires manual compilation using a compiler like `cc` (C compiler), whereas Ruby doesn't require compilation as it's an interpreted language (where compilation is done automatically).
  ```bash
  cc hello.c -o hello
  ```
- C gives you finer control over system resources, we'll talk about that later.

## Data types (the main ones)
> note: Exercie in folder **2-DataTypes**
- int: Used to store integers (whole numbers), typically with a size of 4 bytes on most systems.
- char: Used to store single characters, typically 1 byte in size.
- float: Used to store floating-point numbers (numbers with decimal points), typically with a size of 4 bytes.
- double: Similar to float but with double precision, typically with a size of 8 bytes.
- long int / long long (respectively 2,147,483,647 and 9,223,372,036,854,775,807, which is almost 10 quintillion)
- _Bool: Used to store boolean values (true or false), typically 1 byte in size.
- void: Used to indicate that a function does not return any value or to indicate a pointer to some unspecified type.
```c
#include <stdio.h>

int main() {
    int integerVar = 42;
    float floatVar = 3.14;
    char charVar = 'A';
    char stringVar[] = "Hello, World!";

    printf("Integer: %d\n", integerVar);
    printf("Float: %f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("String: %s\n", stringVar);

    return 0;
}
```
## Converters (to_s, to_i, to_f)
> note: Exercie in folder **3-Converters**
- To string
  ```c
  int num = 12;
  char str[20];
  sprintf(str, "%d", num);
  ```
- To integer: atoi() (ASCII to Integer)
  ```c
  #include <stdio.h>
  #include <stdlib.h>

  int main() {
    char str[] = "1485";
    int num = atoi(str);
    printf("%d\n", num);
    return 0;
  }
  ```
- To float: (float)num
  ```c
  #include <stdio.h>

  int main() {
    int num = 12;
    float fnum = (float)num;
    printf("%f\n", fnum);
    return 0;
  }
  ```
  
## User interface in the terminal: scanf vs gets.chomp
> note: Exercie in folder **4-PrintName**

## function declaration (with data type specification)
- .even? in C
- Let's have another example, before maybe? with int function() ?

## Memory allocation and pointers (optional)
- pointers
- strings
- malloc / realloc / free

- ASCII ? we can talk a bout in the converters methods with the - '0' or +'0' converter

## Challenges
- capitalize
- check out other from 42
