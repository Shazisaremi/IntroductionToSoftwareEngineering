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

## Terminating Statements 

You ’ ll notice that the first line of the function ends with a semicolon ( ; ). That ’ s because the line is a statement — the basic unit controlling the execution flow. 
All of your statements must end with a semicolon — otherwise, your compiler will complain with an error message and your program won ’ t compile.

## Displaying Text through the Standard Output 

The first line in the body of `main()` displays `Hello World!` , followed by a new line, in the console window. 

`std::cout << "Hello World!" << std::endl;` 

*"Hello World!"* is a string — a series of printable characters. Technically, it ’ s a string literal , meaning it ’ s literally the characters between the quotes. 

`cout` is an object, defined in the file iostream , that ’ s used to send data to the standard output stream. In most programs (including this one), the standard output stream simply means the console window on the computer screen. 

I use the *output operator ( << )* to send the string to *cout* . You can think of the output operator like a funnel; it takes whatever ’ s on the open side and funnels it to the pointy side. So the string is funneled to the standard output — the screen.

I use `std` to prefix *cout* to tell the compiler that I mean *cout* from the standard library. *std* is a **namespace** . You can think of a namespace like an area code of a phone number — it identifies the group to which something belongs. You prefix a namespace using the **scope resolution operator ( :: )**. 

Finally, I send `std::endl` to the standard output. *endl* is defined in *iostream* and is also an object in the *std* namespace. 

Sending `endl` to the standard output acts like pressing the Enter key in the console window. In fact, if I were to send another string to the console window, it would appear on the next line.

## Returning a Value from main( ) 
The last statement in the function returns 0 to the operating system.

`return 0;`

Returning 0 from main() is a way to indicate that the program ended without a problem. The operating system doesn ’ t have to do anything with the return value. In general, you can simply return 0 like I did here.