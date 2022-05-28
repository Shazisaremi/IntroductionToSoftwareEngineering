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