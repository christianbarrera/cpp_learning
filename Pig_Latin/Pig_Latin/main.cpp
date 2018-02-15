//  main.cpp
//  Pig_Latin
//
//  Created by Christian Barrera on 2/13/18.
//  Copyright © 2018 Christian Barrera. All rights reserved.
//

// **Author's notes to self**
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

string reverseName(string name);

void printName(string word, string reversed);

//string wordsArray(string sentence);


int main() {
    string sentence = getName();  // asks the user to input a sentence
    string temp;
    string Words[50] = {""};
    int count{0};
    
    for (int i=0; i < sentence.length()+1; ++i){
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            Words[count] = temp;
            ++count;
            temp = "";
        } else {
            temp = temp + sentence[i];
        }
    }
    
//    cout << count << endl;
//    for (int i=0; i<10; ++i)
//        cout << Words[i] << " ";
    
//    cout << endl;
    
    for (int j=0; j < 50; ++j) {
        if (Words[j] != "") {
            string reversed = reverseName(Words[j]);
            printName(Words[j], reversed);
        }
    }
    cout << endl;
    return 0;
}

string getName()    // function to prompt user to get name
{
    
    // string word = "Christian Michael Barrera";  // doesn't quite work with random capitals
    // string reversed;
    cout << "Please input a word: ";
    char word[255];
    cin.get(word, 254);
    
//    cout << word << endl;
    return word;
}

string reverseName(string name) // function to return pig latin name
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
    // why is reversed not acting like a normal string?
    for (int j=0; j < word.length(); ++j)
        cout << reversed[j];
    cout << "ay ";  // add "ay" for pig latin exercise
}
