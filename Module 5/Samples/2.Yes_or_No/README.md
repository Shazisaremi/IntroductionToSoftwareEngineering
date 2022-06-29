# Introducing the Yes or No Program 

The Yes or No program asks the user typical questions a gamer might have to answer. First, the program asks the user to indicate yes or no. Then the program gets more specific and asks whether the user wants to save his game. Again, the results of the program are not remarkable; it ’ s their implementation that ’ s interesting. Each question is posed by a different function that communicates with `main()` .

## Returning a Value 

You can return a value from a function to send information back to the calling code. To return a value, you need to specify a return type and then return a value of that type from the function.

### _Specifying a Return Type_ 
The first function I declare, `askYesNo1()`, returns a `char` value. You can tell this from the function prototype before `main()`:
```c++
char askYesNo1();
```

### _Using the return Statement_ 
`askYesNo1()` asks the user to enter y or n and keeps asking until he does. Once the user enters a valid character, the function wraps up with the following line, which returns the value of `response1`.
```c++
return response1;
```

Notice that `response1` is a char value. It has to be because that ’ s what I promised to return in both the function prototype and function definition. 

A function ends whenever it hits a `return` statement. It ’ s perfectly acceptable for a function to have more than one `return`. This just means that the function has several points at which it can end.

> **Trick**
> 
> You don ’ t have to return a value with a `return` statement. You can use `return` by itself in a function that returns no value (one that indicates `void` as its return type) to end the function.

### _Using a Returned Value_ 
In `main()` , I call the function with the following line, which assigns the return value of the function to `answer1`.
```c++
char answer1 = askYesNo1();
```

This means that `answer1` is assigned either ’y’ or ’n’ — whichever character the user entered when prompted by `askYesNo1()` 
Next, `in main()`, I display the value of `answer1`  for all to see.

## Accepting Values into Parameters 
You can send a function values that it accepts into its parameters. This is the most common way to get information into a function.

### _Specifying Parameters_ 
The second function I declare, `askYesNo2()` , accepts a value into a parameter. Specifically, it accepts a value of type `string`. You can tell this from the function prototype before `main()`:
```c++
char askYesNo2(string question);
```

> **Hint**
> 
> You don ’ t have to use parameter names in a prototype; all you have to include are the parameter types. For example, the following is a perfectly valid prototype which declares `askYesNo2()` , a function with one `string` parameter that returns a `char`.
> ```c++
> char askYesNo2(string);
> ```
> Even though you don ’ t have to use parameter names in prototypes, it ’ s a good idea to do so. It makes your code clearer, and it ’ s worth the minor effort.

From the header of `askYesNo2()` , you can see that the function accepts a `string` object as a parameter and names that parameter `question`.
```c++
askYesNo2(string question)
```
Unlike prototypes, you must specify parameter names in a function definition. You use a parameter name inside a function to access the parameter value.

### _Passing Values to Parameters_ 
The `askYesNo2()` function is an improvement over `askYesNo1()`. The new function allows you to ask your own personalized question by passing a string prompt to the function. In `main()`, I call `askYesNo2()` with:
```c++
char answer2 = askYesNo2("Do you wish to save your game?");
```
This statement calls `askYesNo2()` and passes the string literal argument "Do you wish to save your game?" to the function.

### _Using Parameter Values_ 
`askYesNo2()` accepts "Do you wish to save your game?" into its parameter `question`, which acts like any other variable in the function. In fact, I display question with:  
```c++
cout << question << " (y/n): "; 
```

Just like `askYesNo1()` , `askYesNo2()` continues to prompt the user until he enters y or n. Then the function returns that value and ends. 

Back in `main()`, the returned `char` value is assigned to `answer2`, which I then display.
