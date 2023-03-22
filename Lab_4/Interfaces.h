#ifndef LAB_4_INTERFACES_H
#define LAB_4_INTERFACES_H

//Интерфейс "Геометрическая фигура"
class IGeoFig {
public:
    //Площадь
    virtual double square() = 0;
    //Периметр
    virtual double perimeter() = 0;
};

//Вектор
class CVector2D {
public:
    double x;
    double y;
};

//Интерфейс "Физический объект"
class IPhysObject {
public:
    //Масса, кг
    virtual double mass() const = 0;
    //Координаты центра масс, м
    virtual CVector2D position() const = 0;
    //Сравнение по массе
    virtual bool operator==(const IPhysObject& obj) const = 0;
    //Сравнение по массе
    virtual bool operator<(const IPhysObject& obj) const = 0;

};

//Интерфейс "Отображаемый"
class IPrintable {
public:
    //Отобразить на экране
    //(Выводить в тектовом виде параметры фигуры)
    virtual void draw() = 0;
};

//Интерфейс для классов, которые можно задать через диалог с пользователем
class IDialogueInitiable {
public:
    //Задать параметры объекта с помощью диалога с пользователем
    virtual void initFromDialogue() = 0;
};

//Интерфейс "Класс"
class BaseCObject {
public:
    //Имя класса
    virtual const char* className() = 0;
    //Размер занимаемой памяти
    virtual unsigned int size() = 0;
};

#endif //LAB_4_INTERFACES_H
