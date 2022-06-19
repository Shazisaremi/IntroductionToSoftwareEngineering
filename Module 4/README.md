# For Loops, Strings, And Arrays: Word Jumble

You ’ ve seen how to work with single values, but in this chapter you ’ ll learn how to work with sequences of data. You ’ ll learn more about strings — objects for sequences of characters. You ’ ll also see how to work with sequences of any type. And you ’ ll discover a new type of loop that ’ s perfect for use with these sequences. Specifically, you ’ ll learn to:

- Use *for* loops to iterate over sequences 
- Use objects, which combine data and functions 
- Use *string* objects and their member functions to work with sequences of characters 
- Use arrays to store, access, and manipulate sequences of any type 
- Use multidimensional arrays to better represent certain collections of data

## Using for Loops

it ’ s time to meet another — the *for* loop. Like its cousin the *while* loop, the *for* loop lets you repeat a section of code, but *for* loops are particularly suited for counting and moving through a sequence of things (like the items in an RPG character ’ s inventory). 

Here ’ s the generic form of *for* loop:

```c++
for(initialization; test; action)
    statement
```

_initialization_ is a statement that sets up some initial condition for the loop. (For example, a counter variable to 0.) 
The expression _test_ is tested each time before the loop body executes, just as in a _while_ loop. If _test_ is _false_ , 
the program moves on to the statement after the loop. If _test_ is _true_, the program executes _statement_ . Next, _action_ is executed (which often involves incrementing a counter variable). The cycle repeats until _test_ is _false_ , at which point the loop ends.