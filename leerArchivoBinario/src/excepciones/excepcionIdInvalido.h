#ifndef ExcepcionIdInvalido_H
#define ExcepcionIdInvalido_H

#include <exception>

class ExcepcionIdInvalido : public std::exception
{
    public:
    ExcepcionIdInvalido() noexcept = default;
    ~ExcepcionIdInvalido() = default;

    virtual const char* what() const noexcept {
        return "El ID leido no es valido";
    }

};

#endif