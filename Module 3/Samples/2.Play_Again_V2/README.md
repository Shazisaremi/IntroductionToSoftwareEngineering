## Introducing the Play Again 2.0 Program 

The Play Again 2.0 program looks exactly the same to the user as the original Play Again program. Play Again 2.0, like its predecessor, simulates the play of an exciting game by displaying the message “**Played an exciting game **” and asking the user whether he wants to play again. The user continues to play as long as he enters `y` . This time, though, the program accomplishes the repetition using a `do` loop.

## Looping with a do Loop

Before the `do` loop begins, I declare the character `again` . However, I don ’ t need to initialize it because it ’ s not tested until after the first iteration of the loop. I get a new value for `again` from the user in the loop body. Then I test `again` in the loop expression. If `again` is equal to ‘y’ , the loop repeats; otherwise, the loop ends.

> **In The Real World**
> 
> Even though you can use while and do loops pretty interchangeably, most programmers use the while loop. Although a do loop might seem more natural in some cases, the advantage of a while loop is that its expression appears right at the top of the loop; you don ’ t have to go hunting to the bottom of the loop to find it.
>
> If you ’ ve ever had a game get stuck in the same endless cycle, you might have experienced an infinite loop — a loop without end. Here ’ s a simple example of an infinite loop:
> ```c++
> int test = 10; 
> while (test == 10) { 
>    cout << test;
> } 
> ```

In this case, the loop is entered because `test` is `10` . But because `test` never changes, the loop will never stop. As a result, the user will have to kill the running program to end it. The moral of this story? Make sure that the expression of a loop can eventually become false or that there ’ s another way for the loop to end, such as described in the following section, “ Using break and continue Statements. ”

