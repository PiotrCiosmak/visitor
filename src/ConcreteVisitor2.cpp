#include "../include/ConcreteVisitor2.hpp"

void ConcreteVisitor2::visitConcreteComponentA(const ConcreteComponentA* element) const
{
    std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor2\n";
}

void ConcreteVisitor2::visitConcreteComponentB(const ConcreteComponentB* element) const
{
    std::cout << element->SpecialMethodOfConcreteComponentB() << " + ConcreteVisitor2\n";
}
