# Introducing C++
C++ is leveraged by millions of programmers around the world. It ’ s one of the most popular languages for writing computer applications — and the most popular language for writing big-budget computer games.

## Creating an Executable File

The file that you run to launch a program — whether you ’ re talking about a game or a business application — is an executable file . There are several steps to creating an executable file from C++ source code (a collection of instructions in the C++ language). The process is illustrated in

1. First, the programmer uses an editor to write the C++ source code, a file that usually has the extension .cpp . The editor is like a word processor for programs; it allows a programmer to create, edit, and save source code. 
2. After the programmer saves a source file, he or she invokes a C++ compiler — an application that reads source code and translates it into an object file . Object files usually have the extension .obj . 
3. Next, a linker links the object file to any external files as necessary, and then creates the executable file, which generally ends with the extension .exe . At this point, a user (or gamer) can run the program by launching the executable file.

![](assets/compilation-process-in-c2.png)

To help automate this process, it ’ s common for a programmer to use an all-in-one tool for development, called an `IDE ( Integrated Development Environment )`. An IDE typically combines an editor, a compiler, and a linker, along with other tools.

## Dealing with Errors
- **Compile errors**. These occur during code compilation. As a result, an object file is not produced. These can be syntax errors , meaning that the compiler doesn ’ t understand something. They ’ re often caused by something as simple as a typo. Compilers can issue warnings, too. Although you usually don ’ t need to heed the warnings, you should treat them as errors, fix them, and recompile.
- **Link errors**. These occur during the linking process and may indicate that something the program references externally can ’ t be found. These errors are usually solved by adjusting the offending reference and starting the compile/link process again. 
- **Run-time errors**. These occur when the executable is run. If the program does something illegal, it can crash abruptly. But a more subtle form of run-time error, a logical error , can make the program simply behave in unintended ways. If you ’ ve ever played a game where a character walked on air (that is, a character who shouldn ’ t be able to walk on air), then you ’ ve seen a logical error in action.

# Writing Your First C++ Program

## Commenting Code
Comments are completely ignored by the compiler; they ’ re meant for humans. They can help other programmers understand your intentions. But comments can also help you. They can remind you how you accomplished something that might not be clear at first glance.
You can create a comment using two forward slashes in a row ` // `. Anything after this on the rest of the physical line is considered part of the comment.

## Using Whitespace 
The next line in the program is a blank line. The compiler ignores blank lines. In fact, compilers ignore just about all whitespace — spaces, tabs, and new lines. Like comments, whitespace is just for us humans.

## Including Other Files

`#include <iostream>` 

The preprocessor runs before the compiler does its thing and substitutes text based on various directives. In this case, the line involves the #include directive, which tells the preprocessor to include the contents of another file.

## Defining the main( ) Function

`int main()` 

A function is a group of programming code that can do some work and return a value. In this case, `int` indicates that the function will return an integer value. All function headers have a pair of parentheses after the function name. 

All C++ programs must have a function called `main()` which is the starting point of the program. The real action begins here. 