//
//  main.cpp
//  Pig_Latin
//
//  Created by Christian Barrera on 2/13/18.
//  Copyright © 2018 Christian Barrera. All rights reserved.
//

// For loop through all characters to find ' ' spaces (and could count number of letters)
// maybe create an array of each word string
// Create a variable that counts the number of words
// For loop through each word to reverse the letters and add ay
// For capilization, create char and add to ascii value


#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string getName();

string reverseName(string name); // function to return pig latin name

void printName(string word, string name);


int main() {
    string word = getName();
    string reversed = reverseName(word);
    printName(word, reversed);

    cout << endl;
    return 0;
}



string getName()
{
//    string word = "barrEra";
//    string reversed;
    cout << "Please input a word: ";
    string word;
    cin >> word;
    
    return word;
}

string reverseName(string name) // function to return
{
    string reversed;
    
    for (int i = 0; i < name.length(); ++i) {
        if (name[i] > 64 && name[i] < 91) {
            name[i] = name[i] + 32;
            reversed[i] = name[name.length()-i-1]-32;
            continue;
        } else {
            reversed[i] = name[name.length()-i-1];
        }
        if ((reversed[i] > 64 && reversed[i] < 91) ^ (name[i] > 64 && name[i] < 91)) {
            reversed[i] = reversed[i] + 32;
        
        }
            
    }
    
    return reversed;
}

void printName(string word, string reversed)  // function to print reversed string
{
    cout << "Reversed name: ";
    // why is reversed not acting like a normal string?
    for (int j=0; j < word.length(); ++j)
        cout << reversed[j];
    cout << "ay ";  // add "ay" for pig latin exercise
    
}
