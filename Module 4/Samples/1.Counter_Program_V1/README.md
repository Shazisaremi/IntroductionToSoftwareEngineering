## Introducing the Counter Program

The Counter program counts forward, backward, and by fives. It even counts out a grid with rows and columns. It accomplishes all of this using _for_ loops.

## Counting with for Loops 
The first _for_ loop counts from 0 to 9. The loop begins:
```c++
for (int i=0; i<10; ++i)
```

The initialization statement, `int i = 0` , declares `i` and initializes it to 0. 
The expression `i < 10` says that the loop will continue as long as `i` is less than 10. 
Lastly, the action statement, `++i` , says i is to be incremented each time the loop body finishes. 
As a result, the loop `iterates` 10 times — once for each of the values 0 through 9. And during each iteration, the loop body displays the value of `i` . 

The next _for_ loop counts from 9 down to 0. The loop begins:
```c++
for (int i=9; i>=0; --i)
```

Here, `i` is initialized to 9, and the loop continues as long as i is greater than or equal to 0. Each time the loop body finishes, i is decremented. As a result, the loop displays the values 9 through 0.

The next loop counts from 0 to 50, by fives. The loop begins:
```c++
for (int i=0;i<=50;i+=5)
```

Here, `i` is initialized to 0, and the loop continues as long as i is less than or equal to 50. But notice the action statement, `i += 5` . This statement increases i by five each time the loop body finishes. As a result, the loop displays the values 0, 5, 10, 15, and so on. The expression `i <= 50` says to execute the loop body as long as i is less than or equal to 50.

## Using Empty Statements in for Loops
You can use empty statements in creating your _for_ loop, as I did in the following loop:
```c++
for(;count<0;)
```

I used an empty statement for the initialization and action statements. That ’ s fine because I declared and initialized _count_ before the loop and incremented it inside the loop body. This loop displays the same sequence of integers as the very first loop in the program. Although the loop might look odd, it ’ s perfectly legal.

## Nesting for Loops 
You can nest `for` loops by putting one inside the other. That ’ s what I did in the following section of code, which counts out the elements of a grid. The outer loop, which begins:

```c++
for(int i=0; i<ROWS; i++)
```
simply executes its loop body ROWS (five) times. But it just so happens that there ’ s another for loop inside this loop, which begins:
```c++
    for(int j=0; j<COLUMNS;++j)
```
As a result, the inner loop executes in full for each iteration of the outer loop. In this case, that means the inner loop executes COLUMNS (three) times, for the ROWS (five) times the outer loop iterates, for a total of 15 times. Specifically, here ’ s what happens:

1. The outer _for_ loop declares `i` and initializes it to 0. Since i is less than `ROWS (5)`, the program enters the outer loop ’ s body. 
2. The inner loop declares `j` and initializes it to 0. Since j is less than `COLUMNS (3)`, the program enters its loop body, sending the values of `i` and `j` to `cout` , which displays 0, 0.
3. The program reaches the end of the body of the inner loop and increments j to 1. Since j is still less than COLUMNS (3), the program executes the inner loop ’ s body again, displaying 0, 1. 
4. The program reaches the end of the inner loop ’ s body and increments j to 2. Since j is still less than COLUMNS (3), the program executes the inner loop ’ s body again, displaying 0, 2. 
5. The program reaches the end of the inner loop ’ s body and increments time, however, j is not less than COLUMNS (3) and the inner loop ends.
6. The program finishes the first iteration of the outer loop by sending endl to cout , ending the first row. to 1. Since i
7. The program reaches the end of the outer loop ’ s body and increments is less than ROWS (5), the program enters the outer loop ’ s body again. j i to 3. This 
8. The program reaches the inner loop, which starts from the beginning once again, by declaring and initializing j to 0. The program goes through the process described in Steps 2 through 7, displaying the second row of the grid. This process continues until all five rows have been displayed. 

Again, the important thing to remember is that the inner loop is executed in full for each iteration of the outer loop.