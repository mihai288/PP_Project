#ifndef SERVICIU_H
#define SERVICIU_H

#include <string>

class Serviciu {
public:
    virtual ~Serviciu() = default; // Virtual destructor
    virtual void executa() = 0;
    virtual std::string getTipServiciu() const = 0;
};

#endif // SERVICIU_H
