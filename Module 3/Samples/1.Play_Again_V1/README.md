## Introducing the Play Again Program

The Play Again program simulates the play of an exciting game. (Okay, by “ simulates the play of an exciting game, ” I mean the program displays the message “ **Played an exciting game**.”) Then the program asks the user if he wants to play again. The user continues to play as long as he enters `y`. The program accomplishes this repetition using a `while` loop.

## Looping with a while Loop 

The first thing the program does in the `main()` function is declare the `char` variable named `again` and initialize it to ‘y’ . Then the program begins the `while` loop by testing `again` to see whether it ’ s equal to 'y'. Because it is, the program displays the message "**Played an exciting game**"

asks the user whether he wants to play again, and stores the reply in `again`. The loop continues as long as the user enters y. 

You’ll notice that I had to initialize `again` before the loop because the variable is used in the loop expression. Because a `while` loop evaluates its expressions before its *loop body* (the group of statements that repeat), you have to make sure that any variables in the expression have a value before the loop begins.

