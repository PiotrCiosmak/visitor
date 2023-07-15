#pragma once

#include "Visitor.hpp"

class Component
{
public:
    virtual void accept(Visitor* visitor) const = 0;
    virtual ~Component() = default;
};
