# Creating Multiple Ways 

to Branch The switch statement creates four possible branching points. If the user enters 1 , then code associated with case 1 is executed and “ You picked Easy ” is displayed. If the user enters 2 , then code associated with case 2 is executed and “ You picked Normal ” is displayed. If the user enters 3 , then code associated with case 3 is executed and “ You picked Hard ” is displayed. If the user enters any other value, then default kicks in and “ You made an illegal choice ” is displayed.

> **Trap**
> 
> You ’ ll almost always want to end each case with a break statement. Don ’ t forget them; otherwise, your code might do things you never intended.

## Using while Loops 

`while` loops let you repeat sections of code as generic form of the while loop: while (expression) statement; long as an expression is `true`. Here’s a generic form of the `while` loop.

```c++
while(expression)
    statement;
```

If `expression` is `false` , the program moves on to the statement after the loop. If `expression` is `true` , the program executes `statement` and loops back to test `expression` again. This cycle repeats until `expression` tests `false`, at which point the loop ends.

## Using do Loops 

Like `while` loops, `do` loops let you repeat a section of code based on an expression. The difference is that a `do` loop tests its expression after each loop iteration. This means that the loop body is always executed at least once. Here ’ s a generic form of a `do` loop:

```c++
do
    statement;
while(expression)
```

The program executes **statement** and then, as long as **expression** tests `true`, the loop repeats. Once **expression** tests **false**, the loop ends.

## Using break and continue Statements 

It ’ s possible to alter the behavior you ’ ve seen in loops. You can immediately exit a loop with the `break` statement, and you can jump directly to the top of a loop with a `continue` statement. Although you should use these powers sparingly, they do come in handy sometimes.

## Using Logical Operators 

So far you ’ ve seen fairly simple expressions evaluated for their truth or falsity. However, you can combine simpler expressions with *logical operators* to create more complex expressions. Table lists the logical operators.

<p align="center">
<img src="assets/img.png">
</p>