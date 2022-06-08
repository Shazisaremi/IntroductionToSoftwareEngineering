# Introducing the Score Rater 2.0 Program

The Score Rater 2.0 program also rates a score, which the user enters. But this time, the program uses an if statement with an else clause.

## Creating Two Ways to Branch 
You ’ ve seen the first part of the `if` statement already, and it works just as it did before. If score is greater than 1000, the message, “ You scored 1000 or more. Impressive! ” is displayed.
```c++
    if (score >= 1000) {
        cout << "You scored 1000 or more. Impressive!\n";
    }
```

Here ’ s the twist. The `else` clause provides a statement for the program to branch to if the expression is `false`. So if `(score >= 1000)` is `false` , then the program skips the first message and instead displays the message, “ You scored less than 1000. ”
```c++
    else 
    {
        cout << "You scored less than 1000.\n";
    }
```