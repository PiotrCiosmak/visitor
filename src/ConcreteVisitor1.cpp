#include "../include/ConcreteVisitor1.hpp"

void ConcreteVisitor1::visitConcreteComponentA(const ConcreteComponentA* element) const
{
    std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor1\n";
}

void ConcreteVisitor1::visitConcreteComponentB(const ConcreteComponentB* element) const
{
    std::cout << element->SpecialMethodOfConcreteComponentB() << " + ConcreteVisitor1\n";
}