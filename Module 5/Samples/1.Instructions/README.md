# Introducing the Instructions Program 

The results of the Instructions program are pretty basic — a few lines of text that are the beginning of some game instructions. From the looks of the output, Instructions seems like a program you could have written back in Chapter 1, “ Types, Variables, and Standard I/O: Lost Fortune. ” But this program has a fresh element working behind the scenes — a new function.

## Declaring Functions 
Before you can call a function you ’ ve written, you have to declare it. One way to declare a function is to write a _function prototype_ — code that describes the function. 

You write a prototype by listing the return value of the function (or _void_ if the function returns no value), followed by the name of the function, followed by a list of parameters between a set of parentheses. Parameters receive the values sent as arguments in a function call. 

Just before the `main()` function, I write a function prototype:
```c++
void instructions();  
```
In the preceding code, I declared a function named instructions that doesn ’ t return a value. (You can tell this because I used void as the return type.) The function also takes no values, so it has no parameters. (You can tell this because there ’ s nothing between the parentheses.) 

Prototypes are not the only way to declare a function. Another way to accomplish the same thing is to let the function definition act as its own declaration. To do that, you simply have to put your function definition before the call to the function.

> **Hint**
> 
> Although you don ’ t have to use prototypes, they offer a lot of benefits — not the least of which is making your code clearer.

## Defining Functions 
Defining functions means writing all the code that makes the function tick. You define a function by listing the return value of the function (or void if the function returns no value), followed by the name of the function, followed by a list of parameters between a set of parentheses — just like a function prototype (except you don ’ t end the line with a semicolon). This is called the _function header_ . Then you create a block with curly braces that contains the instructions to be executed when the function is executed. This is called the _function body_ .

At the end of the Instructions program, I define my simple `instructions()` function, which displays some game instructions. Because the function doesn ’ t return any value, I don ’ t need to use a return statement like I do in `main()` . I simply end the function definition with a closing curly brace.

```c++
void instructions()
{
    cout << "Welcome to the most fun you ’ ve ever had with text!\n\n";
    cout << "Here ’ s how to play the game...\n";
}
```

> **Trap**
> 
> A function definition must match its prototype on return type and function name; otherwise, you ’ ll generate a compile error.

## Calling Functions 

You call your own functions the same way you call any other function — by writing the function ’ s name followed by a pair of parentheses that encloses a valid list of arguments. In `main()` , I call my newly minted function simply with:

```c++
instructions();
```
This line invokes `instructions()`. Whenever you call a function, control of the program jumps to that function. In this case, it means control jumps to `instructions()` and the program executes the function ’ s code, which displays the game instructions. When a function finishes, control returns to the calling code. In this case, it means control returns to `main()` . The next statement in `main() (return 0;)` is executed and the program ends.