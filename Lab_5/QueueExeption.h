#ifndef LAB_5_QUEUEEXEPTION_H
#define LAB_5_QUEUEEXEPTION_H
#include <exception>
#include "string"

class QueueException : public std::exception{
    const std::string message;
public:
    explicit QueueException(const std::string &message) : message(message) {}

    ~QueueException() override = default;

    std::string getMessage(){
        return message;
    }
};


#endif //LAB_5_QUEUEEXEPTION_H
