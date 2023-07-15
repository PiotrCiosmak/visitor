#include <iostream>
#include <array>
#include "include/Visitor.hpp"
#include "include/Component.hpp"
#include "include/ConcreteComponentA.hpp"
#include "include/ConcreteComponentB.hpp"
#include "include/ConcreteVisitor1.hpp"
#include "include/ConcreteVisitor2.hpp"

void clientCode(std::array<const Component*, 2> components, Visitor* visitor)
{
    for (const Component* comp: components)
    {
        comp->accept(visitor);
    }
}

int main()
{
    std::array<const Component*, 2> components = {new ConcreteComponentA, new ConcreteComponentB};
    std::cout << "The client code works with all visitors via the base Visitor interface:\n";
    ConcreteVisitor1* visitor1 = new ConcreteVisitor1;
    clientCode(components, visitor1);

    std::cout << "\nIt allows the same client code to work with different types of visitors:\n";
    ConcreteVisitor2* visitor2 = new ConcreteVisitor2;
    clientCode(components, visitor2);

    for (auto component: components)
    {
        delete component;
    }
    delete visitor1;
    delete visitor2;
}
