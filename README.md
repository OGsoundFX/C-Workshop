# C Basics Workshop
**[SLIDES](https://docs.google.com/presentation/d/16rmg1Oifnsbdf33-vSmG6IgTEbmdf4l17njAq7KKY5w/edit#slide=id.g2c43ede4a78_0_10)**

### Introduction: creation and history (3mn)
- The C programming language was created by Dennis Ritchie in 1972.
- There were no "A" or "B" programming languages that directly preceded C. However, B was indeed a precursor to C. B was derived from BCPL (Basic Combined Programming Language)
- C was initially created for internal use at Bell Laboratoies, C offered a good balance between high-level abstraction and low-level control
- C's combination of portability, efficiency, and support for structured programming made it revolutionary and paved the way for modern systems programming languages.

### Low level vs high level / C vs Ruby (10 mn)
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

### Writting our first program in C "Hello World!"
- In C, you have to explicitly define a main function as the entry point, whereas in Ruby, you directly write your code.
- C requires manual compilation using a compiler like `cc` (C compiler), whereas Ruby doesn't require compilation as it's an interpreted language (where compilation is done automatically).
  ```bash
  cc hello.c -o hello
  ```
- C gives you finer control over system resources, we'll talk about that later.


### Data types (the main ones)
	- main function int
	- printf with various examples
- variable declaration (with data type sepcification)
- scanf / printf demo (compare to gets.chomp)
- function declaration (with data type specification)
	- 
- malloc?

- pointers?

- .even? in C

