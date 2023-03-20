#include "StringParserMenu.h"


StringParserMenu::StringParserMenu(){

}

void StringParserMenu::start() {
    isRunning = true;
    run();
}

void StringParserMenu::stop() {
    isRunning = false;
}

void StringParserMenu::run() {
    cout << "Enter string to parse: ";
    string input;
    getline(cin, input);
    stringParser = StringParser(input);
    cout << "You can enter \"-info\" to get command list\n";

    while (isRunning){
        cout << "\nEnter the command: ";
        getline(cin, input);

        if (input == "-exit") {
            stop();
            break;

        } else if (input == "-info"){
            cout << "\tTo end the program: -exit\n";
            cout << "\tTo add separator: -addSep\n";
            cout << "\tTo remove all separators: -rAllSep\n";
            cout << "\tTo get next substring: -next\n";

        } else if (input == "-addSep"){
            cout << "Enter new separator symbol: ";
            char sep;
            sep = cin.get();
            cin.get();
            stringParser.addSeparator(sep);

        } else if (input == "-rAllSep"){
            stringParser.removeAllSeparators();
            cout << "All separators were removed.\n";

        } else if (input == "-next"){
            string next = stringParser.getNextSubstring();
            if (!next.empty()){
                cout << next << endl;
            }

        } else {
            cout << "\nERROR: ENTER COMMAND AGAIN\n";
        }
    }
}