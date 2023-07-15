#pragma once

#include "Visitor.hpp"
#include "ConcreteComponentA.hpp"
#include "ConcreteComponentB.hpp"
#include <iostream>

class ConcreteVisitor2 : public Visitor
{
public:
    void visitConcreteComponentA(const ConcreteComponentA* element) const override;
    void visitConcreteComponentB(const ConcreteComponentB* element) const override;
};
