# Introducing the Scoping Program 
The Scoping program demonstrates scopes. The program creates three variables with the same name in three separate scopes. The program displays the values of these variables, and you can see that even though they all have the same name, the variables are completely separate entities.

## Working with Separate Scopes 
Every time you use curly braces to create a block, you create a scope. Functions are one example of this. Variables declared in a scope aren ’ t visible outside of that scope. This means that variables declared in a function aren ’ t visible outside of that function. 

Variables declared inside a function are considered `local variables` — they ’ re local to the function. `This is what makes functions encapsulated`. 

You ’ ve seen many local variables in action already. I define yet another local variable in `main()` with:

```c++
int var = 5; // local variable in main()
```

This line declares and initializes a local variable named `var`. I send the variable to `cout` in the next line of code:

```c++
cout << "In main() var is: " << var << "\n\n";
```
This works just as you'd expect "5" is displayed.

Next, I call `func()` . Once I enter the function, I ’ m in a separate scope outside the scope defined by `main()` . As a result, I can ’ t access the variable `var` that I defined in `main()`. This means that when I next define a variable named `var` in `func()` with the following line, this new variable is completely separate from the variable named `var` in `main()`.
```c++
int var = -5; // local variable in func()
```

The two have no effect on each other, and that ’ s the beauty of scopes. When you write a function, you don ’ t have to worry if another function uses the same variable names.

Then, when I display the value of `var` in `func()` with the following line, the computer displays "-5".
```c++
cout << "In func() var is: "<< var << "\n\n";
```

That ’ s because, as far as the computer can see in this scope, there ’ s only one variable named `var` — the local variable I declared in this function. 

Once a scope ends, all of the variables declared in that scope cease to exist. They ’ re said to go out of scope . So next, when `func()` ends, its scope ends. This means all of the variables declared in `func()` are destroyed. As a result, the `var` I declared in `func()` with a value of − 5 is destroyed. 

After `func()` ends, control returns to `main()` and picks up right where it left off. Next, the following line is executed, which sends `var` to `cout`.
```c++
cout << "Back in main() var is: " << var << "\n\n";
```
The value of the `var` local to `main()`(5) is displayed again. 

You might be wondering what happened to the `var` I created in `main()` while I was in `func()`. Well, the variable wasn ’ t destroyed because `main()` hadn’t yet ended. (Program control simply took a small detour to `func()`.) When a program momentarily exits one function to enter another, the computer saves its place in the first function, keeping safe the values of all of its local variables, which are reinstated when control returns to the first function.

## Working with Nested Scopes 
You can create a nested scope with a pair of curly braces in an existing scope. That ’ s what I do next in `main()`, with:
```c++
{
    cout << "In main() in a new scope var is: " << var << "\n\n";
    cout << "Creating new var in new scope.\n";
    int var = 10; // variable in new scope, hides other variable named var
    cout << "In main() in a new scope var is: " << var << "\n\n";
}
```

This new scope is a nested scope in `main()`. The first thing I do in this nested scope is display `var`. If a variable hasn ’ t been declared in a scope, the computer looks up the levels of nested scopes one at a time to find the variable you requested. In this case, because var hasn ’ t been declared in this nested scope, the computer looks one level up to the scope that defines main() and finds var . As a result, the program displays that variable ’ s value — 5.

Next, when the nested scope ends, the `var` that was equal to 10 goes out of scope and ceases to exist. However, the first `var` I created is still around, so when I display `var` for the last time in `main()` with the following line, the program displays 5.
```c++
cout << "At end of main() var is: " << var << "\n";
```