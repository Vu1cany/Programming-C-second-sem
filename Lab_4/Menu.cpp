#include "Menu.h"
#include <iostream>

void Menu::start() {
    isWorking = true;
    run();
}

void Menu::stop() {
    isWorking = false;
}

void Menu::run() {
    while (isWorking){
        short command;
        std::cout << "You can enter \"0\" to see info\n";
        std::cout << "Enter the command: ";
        std::cin >> command;
        switch (command) {
            case INFO:
                info();
                break;

            case ADD:
                addFigure();
                break;

            case PRINT:
                printAllFigure();
                break;

            case SQUARE:
                sumOfAllSquares();
                break;

            case PERIMETER:
                sumOfAllPerimeters();
                break;

            case CENTER:
                centerOfSystemWeight();
                break;

            case MEMORY:
                occupiedMemory();
                break;
            case EXIT:
                stop();
                break;
        }
    }
}

void Menu::info() {
    std::cout << "\t0 - Info\n";
    std::cout << "\t1 - Add new figure\n";
    std::cout << "\t2 - Print all figures\n";
    std::cout << "\t3 - Sum of all squares\n";
    std::cout << "\t4 - Sum of all perimeters\n";
    std::cout << "\t5 - Coords center of the system\n";
    std::cout << "\t6 - Amount of memory used\n";
    std::cout << "\t7 - EXIT\n";
}

void Menu::addFigure() {
    short command;
    std::cout << "\nEnter \"0\" to add RECTANGLE or \"1\" to add ELLIPSE: ";
    std::cin >> command;
    switch (command) {
        case RECTANGLE:
            system.insert(system.end(), new Rectangle());
            break;

        case ELLIPSE:
            system.insert(system.end(), new Ellipse());
            break;
    }
    std::cout << std::endl;
}

void Menu::printAllFigure() {
    for (auto figure : system) {
        figure->draw();
    }
}

void Menu::sumOfAllSquares() {
    double sum = 0;
    for (auto figure : system) {
        sum += figure->square();
    }
    std::cout << std::endl;
    std::cout << "\tSum of all squares: " << sum << std::endl;
    std::cout << std::endl;
}

void Menu::sumOfAllPerimeters() {
    double sum = 0;
    for (auto figure : system) {
        sum += figure->perimeter();
    }
    std::cout << std::endl;
    std::cout << "\tSum of all perimeters: " << sum << std::endl;
    std::cout << std::endl;
}

void Menu::centerOfSystemWeight() {
    double sumWeight = 0;
    double sumXCoords = 0;
    double sumYCoords = 0;
    for (auto figure : system) {
        sumWeight += figure->mass();
        sumXCoords += figure->position().x;
        sumYCoords += figure->position().y;
    }
    CVector2D centerOfSystem;
    centerOfSystem.x = sumXCoords / sumWeight;
    centerOfSystem.y = sumYCoords / sumWeight;
    std::cout << std::endl;
    std::cout << "\tCenter weight coords: " << centerOfSystem.x << ", " << centerOfSystem.y << std::endl;
    std::cout << std::endl;
}

void Menu::occupiedMemory() {
    unsigned int sum = 0;
    for (auto figure : system) {
        sum += figure->size();
    }
    std::cout << std::endl;
    std::cout << "\tAmount of memory used : " << sum << std::endl;
    std::cout << std::endl;
}






