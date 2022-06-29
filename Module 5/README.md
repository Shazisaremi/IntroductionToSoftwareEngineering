## Functions: Mad Lib

Every program you ’ ve seen so far has consisted of one function: `main()`. However, once your programs reach a certain size or level of complexity, it becomes hard to work with them like this. Fortunately, there are ways to break up big programs into smaller, bitesized chunks of code. In this chapter, you ’ ll learn about one way — creating new functions. Specifically, you ’ ll learn to:

- Write new functions
- Accept values into your new functions through parameters
- Return information from your new functions through return values 
- Work with global variables and constants 
- Overload functions

### Creating Functions 
C++ lets you write programs with multiple functions. Your new functions work just like the ones that are part of the standard language — they go off and perform a task and then return control to your program. A big advantage of writing new functions is that doing so allows you to break up your code into manageable pieces. Just like the functions you ’ ve already learned about from the standard library, your new functions should do one job well.

#### Samples:
[Instructions v1.0](./Samples/1.Instructions)

### Using Parameters and Return Values
As you ’ ve seen with standard library functions, you can provide a function value and get a value back. For example, with the `toupper()` function, you provide a character, and the function returns the uppercase version of it. Your own functions can also receive values and return a value. This allows your functions to communicate with the rest of your program.

#### Samples:
[Yes_or_No v1.0](./Samples/2.Yes_or_No)

### Understanding Software Reuse 
You can reuse functions in other programs. For example, since asking the user a yes or no question is such a common thing to do in a game, you could create an `askYesNo()` function and use it in all of your future game programs. So writing good functions not only saves you time and energy in your current game project, but it can save you effort in future ones, too.

> **In the Real World**
> It ’ s always a waste of time to reinvent the wheel, so software reuse — employing existing software and other elements in new projects — is a technique that game companies take to heart. The benefits of software reuse include: 
>- **Increased company productivity**. By reusing code and other elements that already exist, such as a graphics engine, game companies can get their projects done with less effort. 
>- **Improved software quality**. If a game company already has a tested piece of code, such as a networking module, then the company can reuse the code with the knowledge that it ’ s bug-free. 
>- **Improved software performance**. Once a game company has a high-performance piece of code, using it again not only saves the company the trouble of reinventing the wheel, it saves them from reinventing a less efficient one.

### Working with Scopes 
A variable ’ s scope determines where the variable can be seen in your program. Scopes allow you to limit the accessibility of variables and are the key to encapsulation, helping keep separate parts of your program, such as functions, apart from each other.










