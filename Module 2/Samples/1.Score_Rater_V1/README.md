# Introducing the Score Rater Program

The Score Rater program comments on a player ’ s score using an `if` statement.

## Testing true and false

In the first if statement I test true . Because true is, well, true, the program displays the message, “ This is always displayed. ”
```c++
    if (true) {
        cout << "This is always displayed.\n\n";
    }
```

In the next if statement I test false . Because `false` isnt true, the program doesn't display the message, “ This is never displayed. ” 
```c++
    if (false) {
        cout << "This is never displayed.\n\n";
    }
```

## Interpreting a Value as true or false

You can interpret any value as `true` or `false`. Any non-zero value can be interpreted as `true`. while 0 can be interpreted as `false`. I put this to the test in the next `if` statement:
```c++
    if (score) {
        cout << "At least you didn ’ t score zero.\n\n";
    }
```

## Using Relational Operators

Probably the most common expression you ’ ll use with `if` statements involves comparing values using the relational operators. That ’ s just what I ’ ll demonstrate next. I test to see whether the score is greater than or equal to 250.

```c++
    if (score >= 250) {
        cout << "You scored 250 or more. Decent.\n\n";
    }
```

Because `score` is 1000, the block is executed, displaying the message that the player earned a decent score. If `score` had been less than 1000, the block would have been skipped and the program would have continued with the statement following the block.

## Nesting if Statements

An `if` statement can cause a program to execute a statement or block of statements, including other `if` statements. When you write one `if` statement inside another, it ’ s called nesting . In the following code, the if statement that begins `if (score >= 1000)` is nested inside the `if` statement that begins `if (score >= 500)` .

```c++
    if (score >= 500) {
        cout << "You scored 500 or more. Nice.\n\n";
        if (score >= 1000) {
            cout << "You scored 1000 or more. Impressive!\n";
        }
    }
```

Because `score` is greater than 500, the program enters the statement block and displays the message, “ You scored 500 or more. Nice. ” Then, in the inner `if` statement, the program compares `score` to 1000. Because `score` is greater than or equal to 1000, the program displays the message, “ You scored 1000 or more. Impressive! ”