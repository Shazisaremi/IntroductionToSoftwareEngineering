# Introducing the Hello World 2.0 Program

The Hello World 2.0 program produces the exact results of the original Game Over program, illustrated in Figure 1.2. But there ’ s a difference in the way elements from the std namespace are accessed.

## Employing a using Directive 

The program starts in the same way. I use two opening iostream for output. But next, I have a new type of statement. 

```
using namespace std; 
```

This `using` directive gives me direct access to elements of the `std` namespace. Again, if a namespace is like an area code, then this line says that all of the elements in the std namespace should be like local phone numbers to me now. That is, I don ’ t have to use their area code (the `std::` prefix) to access them.

I can use `cout` and `endl` , without any kind of prefix. This might not seem like a big deal to you now, but when you have dozens or even hundreds of references to these objects, you ’ ll thank me.


> ### Note: Employing using Declarations 
> I write two using declarations.
> 
> ```
> using std::cout; 
> using std::endl;
> ```
> 
>By declaring exactly which elements from the `std` namespace I want local to my program, I ’ m able to access them directly, just as in Game Over 2.0. Although it requires more typing than a using directive, the advantage of this technique is that it clearly spells out those elements I plan to use. Plus, it doesn ’ t make local a bunch of other elements that I have no intention of using.