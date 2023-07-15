#pragma once

#include "Component.hpp"
#include <iostream>

class ConcreteComponentB : public Component
{
public:
    void accept(Visitor* visitor) const override;
    [[nodiscard]] std::string SpecialMethodOfConcreteComponentB() const;
};