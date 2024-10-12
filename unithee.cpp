#include "Unit.h"

Position Unit::getPosition() const {
    return position;
}

void Unit::setPosition(const Position& pos) {
    position = pos;
}
