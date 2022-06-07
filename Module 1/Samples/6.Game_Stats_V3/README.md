#Introducing the Game Stats 3.0 Program

The Game Stats 3.0 program uses constants to represent values. First, the program calculates a player ’ s score, and then it calculates the upgrade cost of a unit in a strategy game. Figure 1.8 shows the results.

## Using Constants

I define a constant, `ALIEN_POINTS` , to represent the point value of an alien. 
```c++
const int ALIEN_POINTS = 150;
```
 I simply use the keyword `const` to modify the definition. Now I can use `ALIEN_POINTS` just like any integer literal. Also, notice that the name I chose for the constant is in all capital letters. This is just a convention, but it ’ s a common one. An identifier in all caps tells a programmer that it represents a constant value. 
 
Next, I put the constant to use in the following line:

```c++
int score = aliensKilled * ALIEN_POINTS;
```

I calculate a player ’ s score by multiplying the number of aliens killed by the point value of an alien. Using a constant here makes the line of code quite clear.

## Using Enumerations

An *enumeration* is a set of `unsigned int` constants, called *enumerators*. Usually the enumerators are related and have a particular order. Here ’ s an example of an enumeration: 
```c++
enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
```

This defines an enumeration named `difficulty` . By default, the value of begins at zero and increases by one. So *NOVICE* is *0* , *EASY* is *1* , *NORMAL* is *2* , *HARD* enum is *3*,  *UNBEATABLE* is *4* . To define an enumeration of your own, use the keyword `enum` followed by an identifier, followed by a list of enumerators between curly braces. 

Next, I create a variable of this new `enumeration` type. 
```c++
enumerators difficulty myDifficulty = EASY;
```

The variable `myDifficulty` is set to EASY (which is equal to 1 ). `myDifficulty` is of type `difficulty`, so it can only hold one of the values defined in the enumeration. That means myDifficulty can only be assigned NOVICE , EASY , NORMAL , HARD , UNBEATABLE , 0 , 1 , 2 , 3 or 4.

> **Note:**
> 
> Any enumerators that are **not assigned** values get the value of the previous enumerator plus one. Because I didn ’ t assign a value to BOMBER_COST , it ’ s initialized to 26 .
> ```c++
> enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
> ```

