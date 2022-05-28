# Introducing the Game Stats Program 

The Game Stats program displays information that you might want to keep track of in a space shooter game, such as a player ’ s score, the number of enemies the player has destroyed, and whether the player has his shields up. The program uses a group of variables to accomplish all of this. Figure 1.5 illustrates the program./

## Understanding Fundamental Types 

Every variable you create has a *type* , which represents the kind of information you can store in the variable. It tells your compiler how much memory to set aside for the variable and it defines exactly what you can legally do with the variable. 

*Fundamental types* — those built into the language — include:
- `bool` for Boolean values ( `true` or `false` ), 
- `char` for single character values, 
- `int` for integers, 
- `float` for single-precision floating point numbers, 
- `double` for double-precision floating point numbers. 

## Understanding Type Modifiers 

You can use modifiers to alter a type. 

`short` is a modifier that can reduce the total number of values a variable can hold. 

`long` is a modifier that can increase the total number of values a variable can hold. 

`short` may decrease the storage space required for a variable while `long` may increase it. `short` and `long` can modify int . `long` can also modify `double` . 

`signed` and `unsigned` are modifiers that work only with integer types. `signed` means that a variable can store both positive and negative values, while `unsigned` means that a variable can store only positive values. Neither `signed nor unsigned` change the total number of values a variable can hold; they only change the range of values. 

`signed` is the default for integer types.

<p align="center">
<img src="assets/Screenshot 2022-05-28 152727.png"/>
</p>

> **Hint**
> 
> For brevity’s sake, *short int* can be written as just *short*, and *long int* can be written as just *long*.

## Declaring Variables 

All right, now that you ’ ve got a basic understanding of types, it ’ s time to get back to the program. One of the first things I do is declare a variable (request that it be created) with the line: 

```
int score;
double distance;
char playAgain;
bool shieldsUp;
short lives, aliensKilled;
```

In this code, I declare a variable of type `int` , which I name `score` . You use a variable name to access the variable. You can see that to declare a variable you specify its type followed by a name of your choosing. Because the declaration is a statement, it must end with a semicolon.

## Naming Variables 

To declare a variable, you must provide a name, known as an identifier . There are only a few rules you have to follow to create a legal identifier. 
- An identifier can contain only numbers, letters, and underscores. 
- An identifier can ’ t start with a number. 
- An identifier can ’ t be a C++ keyword.

## Assigning Values to Variables 

In the next group of statements, I assign values to the six variables I declared.

```
score = 0;
distance = 1200.76;
playAgain = 'y';
shieldsUp = true;
lives = 3;
aliensKilled = 10;
```

## Initializing Variables

You can both declare and assign a value to variables in a single initialization statement. That’s exactly what I do next.
```
double engineTemp = 6572.89; 
```

This line creates a variable of type double named engineTemp, which stores the value 6572.89. 

> **Hint :**
> 
> Although you can declare a variable without assigning it a value, it ’ s best to initialize a new variable with a starting value whenever you can. This makes your code clearer, plus it eliminates the chance of accessing an uninitialized variable, which may contain any value.

## Displaying Variable Values 

To display the value of a variable of one of the fundamental types, just send it to `cout` . That ’ s what I do next in the program. Note that I don ’ t try to display shieldsUp because you don ’ t normally display bool values.

```
cout << "\nscore: " << score << endl;
cout << "distance: " << distance << endl;
cout << "playAgain: " << playAgain << endl;
//skipping shieldsUp since you don ’ t generally print Boolean values
cout << "lives: " << lives << endl;
cout << "aliensKilled: " << aliensKilled << endl;
cout << "engineTemp: " << engineTemp << endl;
```

> **Trick :**
>
> In the first statement of this section I use what ’ s called an escape sequence — a pair of characters that begins with a backslash ( \ ), which represents special printable characters. 
> 
> ```
> cout << "\nscore: " << score << endl; 
> ```
> The escape sequence I used is \n , which represents a new line. When sent to cout as part of a string, it ’ s like pressing the Enter key in the console window. Another useful escape sequence is \t , which acts as a tab. 

## Getting User Input 

Another way to assign a value to a variable is through user input. So next, I assign the value of new variable, fuel , based on what the user enters. To do so I use the  following line:  
```
cin >> fuel; 
```

## Defining New Names for Types 

You can define a new name for an existing type. In fact, that ’ s what I do next in the line: 
```
typedef unsigned short int ushort; 
```

This code defines the identifier `ushort` as another name for the type `unsigned short int`. To define new names for existing types, use `typedef` followed by the current type, followed by the new name. `typedef` is often used to create shorter names for types with long names. 

You can use your new type name just like the original type. I initialize a ushort variable(which is really just an `unsigned short int`) named `bonus` and display its value.