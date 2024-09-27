//
//  main.cpp
//  Morse to English
//
//  Created by Caden Finley on 9/5/23.
//
#include <iostream>
#include <map>
#include <sstream>
using namespace std;
map<string, char> morseKey =  //key for morse to english, this took forever thank you wikipedia
{
    {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
    {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
    {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
    {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
    {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
    {"--..", 'Z'}
};
string morseToEnglishTranslation(const string& morseCode) { //translate morse to english
    stringstream ss(morseCode);
    string morseWord, englishWord;
    while (ss >> morseWord) {
        if (morseKey.find(morseWord) != morseKey.end()) {
            englishWord += morseKey[morseWord];
        }
    }
    return englishWord;
}
int main() {
    string input;
    string finalOutput;
    cout << "Enter Morse words, one per line:"<<endl;
    while (true) {
        getline(cin, input);
        if (input == "Quit") {
            break;
        }
        finalOutput=finalOutput+" "+morseToEnglishTranslation(input);
    }
    cout << "Translation: " << finalOutput << endl;
}


