#include "../include/ConcreteComponentB.hpp"

void ConcreteComponentB::accept(Visitor* visitor) const
{
    visitor->visitConcreteComponentB(this);
}

std::string ConcreteComponentB::SpecialMethodOfConcreteComponentB() const
{
    return "B";
}
