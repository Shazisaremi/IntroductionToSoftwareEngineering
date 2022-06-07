# Forks in the Road: Comparing, Deciding. 

## Introduction:
So far, the programs you ’ ve seen have been linear — each statement executes, in order, from top to bottom. However, to create interesting games, you need to write programs that execute (or skip) sections of code based on some condition. That ’ s the main topic of this chapter. Specifically, you ’ ll learn to:

- Understand truth (as C++ defines it) 
- Use *if* statements to branch to sections of code 
- Use *switch* statements to select a section of code to execute 
- Use *while* and do loops to repeat sections of code 
- Generate random numbers

## Using The if Statement

Okay, it ’ s time to put the concepts of true and false to work. You can use an `if` statement to test an expression for truth and execute some code based on it. Here ’ s a simple form of the `if` statement:
```c++
if(expression){
    statement;
}
```

If `expression` is `true` , then `statement` is executed. Otherwise, `statement` is skipped and the program branches to the `statement` after the `if` suite.

and how to choose a path forward:

```c++
if (goingToParty) ...
```

Here's an example combining the two:

```c++
int main()
{
  int party_distance_kms = 32;
  int my_limit_tonight_kms = 10;  // well, ten-ish

  if (party_distance_kms > my_limit_tonight_kms)
  {
    cout << "I'm going to binge mini painting tutorials on Youtube\n\n";
  }
  else
  {
    cout << "Choose meme costume, pick up some beverages.\n\n";
  }
}
```

## This Module will help you achieve the following outcomes:
a) Utilise an integrated development environment to develop practical software project solutions.

b) Demonstrate the ability to read and interpret code, describe its purpose and systematically debug for issues in syntax or logic.

c) Utilise an industry standard programming language to solve simple application design problems.

## Source:
https://torrens.blackboard.com/webapps/blackboard/content/listContentEditable.jsp?content_id=_10642643_1&course_id=_127105_1&mode=reset