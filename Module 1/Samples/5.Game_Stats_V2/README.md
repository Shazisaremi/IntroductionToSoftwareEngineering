# Introducing the Game Stats 2.0 Program 
The Game Stats 2.0 program manipulates variables that represent game stats and displays the results.

## Altering the Value of a Variable 

After I create a variable to hold the player’s score and display it, I alter the score by increasing it by 100. 
```
score = score + 100;  
```
This assignment statement says to take the current value of score, add 100, and assign the result back to `score`. In effect, the line increases the value score by 10.

## Using Combined Assignment Operators 
There’s an even shorter version of the preceding line, which I use next. 
```
score += 100; 
```
This statement produces the same results as score = score + 100 . The += operator is called a *combined assignment operator* because it combines an arithmetic operation (addition, in this case) with assignment.

<p align="center">
<img src="assets/Screenshot 2022-05-28 185021.png"/>
</p>

## Using Increment and Decrement Operators 

Next, I use the increment operator ( ++ ), which increases the value of a variable by one. I use the operator to increase the value of lives twice. First, I use it in the following line: 
```
++lives; 
```
Then I use it again in the following line: 
```
lives++; 
```
Each line has the same net effect; it increments lives from 3 to 4.

At this point, you might be thinking that there ’ s no difference between the postfix and prefix versions, but you ’ d be wrong. In a situation where you only increment a single variable (as you just saw), both operators produce the same final result. But in a more complex expression, the results can be different. 

To demonstrate this important difference, I perform a calculation that would be appropriate for the end of a game level. I calculate a bonus based on the number of lives a player has, and I increment the number of lives. However, I perform this calculation in two different ways. The first time, I use the prefix increment operator. 
```
int bonus = ++lives * 10; 
```
The code is equivalent to 4 * 10; lives is 4 and bonus is 40.
```
int bonus = lives++ * 10
```
The code is equivalent to 3 * 10; lives is 4 and bonus is 30.

## Dealing with Integer Wrap Around 

What happens when you increase an integer variable beyond its maximum value? It turns out you don ’ t generate an error. Instead, the value “ wraps around ” to the type ’ s minimum value. Next up, I demonstrate this phenomenon. First, I assign score the largest value it can hold. 
```
score = 4294967295; 
```
Then I increment the variable. 
```
++score; 
```
As a result, score becomes 0 because the value wrapped around, much like a car odometer does when it goes beyond its maximum value

<p align="center">
<img src="assets/Screenshot 2022-05-28 192721.png"/>
</p>

> **Hint:**
> 
> Make sure to pick an integer type that has a large enough range for its intended use.
