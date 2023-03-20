#include "StringParser.h"

StringParser::StringParser() {}

StringParser::StringParser(std::string parsableString){
    this->parsableString = parsableString;
}

void StringParser::addSeparator(char separator) {
    separators.push_back(separator);
    parseSuccessfully = false;
}

string StringParser::getNextSubstring() {
    if (!parseSuccessfully){
        split();
    }
    if (nextSubstringIndex == parsedStrings.size()){
        return "";
    }
    return parsedStrings[nextSubstringIndex++];
}

void StringParser::removeAllSeparators() {
    parsedStrings.clear();
    separators.clear();
    nextSubstringIndex = 0;
}

void StringParser::indicateAnalyseFinish(){
    if (parseSuccessfully){
        cout << "Parse process successfully!" << "\n";
    } else {
        cout << "Parse process was failed!" << "\n";
    }
}

void StringParser::split() {
    size_t substringIndex = 0;
    nextSubstringIndex = 0;
    parsedStrings.clear();
    parsedStrings.emplace_back();
    parseSuccessfully = false;

    for (int i = 0; i < parsableString.length(); ++i) {
        if (i == parsableString.length() - 1){
            parseSuccessfully = true;
        }

        bool isSeparator = false;
        for (char separator : separators) {
            if (separator == parsableString[i]){

                if (parsedStrings[parsedStrings.size() - 1].length() != 0){
                    substringIndex++;
                    parsedStrings.emplace_back();
                }

                isSeparator = true;
                break;
            }
        }

        if (isSeparator){
            continue;
        }

        parsedStrings[substringIndex].push_back(parsableString[i]);
    }

    indicateAnalyseFinish();
}
