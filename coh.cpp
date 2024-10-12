#include "Computer.h"
#include <iostream>

Computer::Computer(CPU* cpu, RAM* ram, Storage* storage, GPU* gpu, Motherboard* motherboard, PowerSupply* powerSupply, Display* display, InputDevices* inputDevices, OS* os)
    : cpu(cpu), ram(ram), storage(storage), gpu(gpu), motherboard(motherboard), powerSupply(powerSupply), display(display), inputDevices(inputDevices), os(os) {}

void Computer::print() const {
    cpu->print();
    ram->print();
    storage->print();
    gpu->print();
    motherboard->print();
    powerSupply->print();
    display->print();
    inputDevices->print();
    os->print();
}
