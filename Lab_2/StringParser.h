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

    void addSeparator(char separator);

    void removeAllSeparators();

    string getNextSubstring();

private:
    string parsableString;
    bool parseSuccessfully;
    size_t nextSubstringIndex;

    vector<string> parsedStrings;
    vector<char> separators;

    void split();

    void indicateAnalyseFinish();
};


#endif //LAB_2_STRINGPARSER_H
