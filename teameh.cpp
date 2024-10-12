#ifndef TEAM_H
#define TEAM_H

#include "Unit.h"
#include <vector>

class Team {
public:
    void addUnit(Unit* unit);
    void print() const;

private:
    std::vector<Unit*> units;
};

#endif // TEAM_H
