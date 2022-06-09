#Introducing To Enumeration

## Using Enumerations

An *enumeration* is a set of `unsigned int` constants, called *enumerators*. Usually the enumerators are related and have a particular order. Here ’ s an example of an enumeration: 
```c++
enum suit{heart, diamond=8, spade=3, club};
```

This defines two enumeration named `colors` . By default, the value of begins at zero and increases by one. So *heart* is *0* , *diamond* is *8* , *spade* is *3* , *club* enum is *4*. 

To define an enumeration of your own, use the keyword `enum` followed by an identifier, followed by a list of enumerators between curly braces. 

> 💡**Note:**
> 
> Any enumerators that are **not assigned** values get the value of the previous enumerator plus one. Because I didn ’ t assign a value to BOMBER_COST , it ’ s initialized to 26 .
> ```c++
> enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
> ```

