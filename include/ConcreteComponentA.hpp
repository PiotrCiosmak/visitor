#pragma once

#include "Component.hpp"
#include <iostream>

class ConcreteComponentA : public Component
{
public:
    void accept(Visitor* visitor) const override;
    [[nodiscard]] std::string ExclusiveMethodOfConcreteComponentA() const;
};