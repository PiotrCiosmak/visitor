#include "../include/ConcreteComponentA.hpp"

void ConcreteComponentA::accept(Visitor* visitor) const
{
    visitor->visitConcreteComponentA(this);
}

std::string ConcreteComponentA::ExclusiveMethodOfConcreteComponentA() const
{
    return "A";
}
