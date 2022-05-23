#include <iostream>
#include <string>
using namespace std;

// All C++ programs must have a function called main() which is the starting point of the program. The real action begins here. 
int main() {
  // Storage Declare some boxes of memory to hold text or strings 
  string knightingWords = "";
  string playerName = "";
  string message = "";

  // Store some text in one of these variable memory boxes
  // A variable on the left of '='. the 'assignment' operator.
  // is assigned whatever is on the right.
  knightingWords = "Stand up as a knight of Terrensia, Ser ";

  // Output: Ask the player to enter their name
  cout << "What is they name ?";

  // This is a strange king of storage. 'cin' allows the user to type in their name.
  // The '>>' operator flows that name value into playerName storage.
  cin >> playerName;

  // Processing: join the two strings into one. store in another memory box.
  message = knightingWords + playerName;

  // Output! cout is console out: it prints things out to the console.
  cout << message;

  return(0);
}
