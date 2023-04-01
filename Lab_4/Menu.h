#ifndef LAB_4_MENU_H
#define LAB_4_MENU_H
#include "Interfaces.h"
#include "GeoShapes/Rectangle.h"
#include "GeoShapes/Ellipse.h"
#include "set"

enum Command{
    INFO,
    ADD,
    PRINT,
    SQUARE,
    PERIMETER,
    CENTER,
    MEMORY,
    EXIT
};

enum Figure{
    RECTANGLE,
    ELLIPSE
};

class Menu {
public:

    void start();

    void stop();

    void run();


private:
    std::set<IFigure*> system;
    bool isWorking = false;

    void info();

    void addFigure();

    void printAllFigure();

    void sumOfAllSquares();

    void sumOfAllPerimeters();

    void centerOfSystemWeight();

    void occupiedMemory();
};

#endif //LAB_4_MENU_H
