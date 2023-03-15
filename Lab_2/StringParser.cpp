#include "StringParser.h"

StringParser::StringParser() {}

StringParser::StringParser(std::string parsableString){
    this->parsableString = parsableString;
}

void StringParser::addSeparator(string &separator) {
    separators.push_back(separator);
    parseSuccessfully = false;
    parsedStrings.clear();
    nextSubstringIndex = 0;

    //Добавить логику обнуления массивов
}


string StringParser::getNextSubstring() {
    if (nextSubstringIndex >= parsedStrings.size()){
        cout << "Подстрок больше нет, возвращена пустая строка";
        return "";

    } else if (nextSubstringIndex == parsedStrings.size() - 1){
        cout << "Возвращена последня подстрока, подстрок больше нет." << "\n";
    }
    return parsedStrings[nextSubstringIndex++];
}

void StringParser::removeAllSeparators() {

    //Добавить логику обнуления массивов
}

void StringParser::indicateAnalyseFinish() {

}

void StringParser::split() {

}
