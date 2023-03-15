#ifndef LAB_2_STRINGPARSER_H
#define LAB_2_STRINGPARSER_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class StringParser {
public:
    StringParser();

    StringParser(string parsableString);

    void addSeparator(string &separator);

    void removeAllSeparators();

    string getNextSubstring();

    void indicateAnalyseFinish();
private:
    string parsableString;
    bool parseSuccessfully = false;
    int nextSubstringIndex = 0;

    vector<string> parsedStrings;
    vector<string> separators;

    void split();
};


#endif //LAB_2_STRINGPARSER_H
