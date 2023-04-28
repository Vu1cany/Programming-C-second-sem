#ifndef LAB_5_EXEPTIONS_H
#define LAB_5_EXEPTIONS_H
#include <exception>
#include "string"

class QueueException : public std::exception{

public:
    QueueException(exception message) : exception(message) {}
};


#endif //LAB_5_EXEPTIONS_H
