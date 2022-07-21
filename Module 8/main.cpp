#include <algorithm> // using for convert letters to lowercase
#include <fstream> // using for read text file
#include <unordered_set> // using for create unordered set
#include <sstream> // A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin)
#include <string> //
#include <vector> // using for create vectors

#include <iostream>
using namespace std;

int main()
{
    vector<string> words;
//   Declaring Vector of String type
//   Values can be added here using initializer-list
//   syntax
//    std::vector<std::string> colour{ "Blue", "Red",
//                                     "Orange" };

    unordered_set<string> uniqueWords;
//   Use unordered_set when :
//   We need to keep a set of distinct elements and no ordering is required.
//   We need single element access i.e. no traversal.

//   Use set when:
//   We need ordered data.
//   We would have to print/access the data (in sorted order).
//   We need predecessor/successor of elements.
//   Since set is ordered, we can use functions like binary_search(), lower_bound() and upper_bound() on set elements. These functions cannot be used on unordered_set().

    ifstream fin("D:\\Users\\rezaz\\CLionProjects\\IntroductionToSoftwareEngineering\\Module 8\\in.txt");
//   ifstream Reads from files
//   What is ifstream fin?
//   ifstream is short for input file stream. fin is the stream variable name. (and may be any legal C++ variable name.)
//   Naming the stream variable "fin" is helpful in remembering. that the information is coming "in" from the file.

    if (fin.is_open())
//    Check if a file is open
//    Returns whether the stream is currently associated to a file.
//    Streams can be associated to files by a successful call to member open or directly on construction, and disassociated by calling close or on destruction.
    {
        string line;
        while (getline(fin, line))
//        Read line from fin file and store in line variable
//        Recall that getline() stops reading when it encounters a '\n'

        {
            istringstream iss(line);
//            The std::istringstream is a string class object which is used to stream the string into
//            different variables and similarly files can be stream into strings.
            for (string word; iss >> word;)
//            Streaming until word is encountered
            {
                string lowercaseWord = word;
//                use lowercaseWord to store the word that find by the iss

                transform(word.begin(), word.end(), lowercaseWord.begin(), ::tolower);
//                transform all letters in the word to lowercase and store on lowercaseWord Variable.

                if (uniqueWords.find(lowercaseWord) == uniqueWords.end())
//                search for the word in the uniqueWords unordered_set , the .find not find the same word return uniqueWords.end()
                {
                    uniqueWords.insert(lowercaseWord);
//                    insert the not found word to unique words.
                    words.push_back(word);
//                    push the word to end of words vector.
                }
            }
        }

        fin.close();
    }
    ofstream fout("D:\\Users\\rezaz\\CLionProjects\\IntroductionToSoftwareEngineering\\Module 8\\out.txt");
    // ofstream	Creates and writes to files
    if (fout.is_open())
    {
        for (int i = 0; i < words.size(); i++)
        {
            fout << words[i] << " "; // put Nth word of words vector to file and create space (" ")
        }

        fout.close(); // close the file
    }

    return 0;
}