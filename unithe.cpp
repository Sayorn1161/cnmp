#ifndef UNIT_H
#define UNIT_H

#include "Position.h"

class Unit {
public:
    virtual void print() const = 0;
    virtual ~Unit() = default;

    Position getPosition() const;
    void setPosition(const Position& pos);

private:
    Position position;
};

#endif // UNIT_H
