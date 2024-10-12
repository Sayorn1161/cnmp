#include "Team.h"

void Team::addUnit(Unit* unit) {
    units.push_back(unit);
}

void Team::print() const {
    for (const auto& unit : units) {
        unit->print();
    }
}
