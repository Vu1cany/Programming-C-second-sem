#ifndef LAB_2_STRINGPARSERMENU_H
#define LAB_2_STRINGPARSERMENU_H
#include "StringParser.h"

class StringParserMenu {
private:
    StringParser stringParser;
    bool isRunning = false;

    void run();

public:
    StringParserMenu();

    void start();

    void stop();
};


#endif //LAB_2_STRINGPARSERMENU_H
