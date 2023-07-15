cmake_minimum_required(VERSION 3.25)
project(visitor)

set(CMAKE_CXX_STANDARD 23)

add_executable(visitor main.cpp include/Visitor.hpp include/Component.hpp src/ConcreteComponentA.cpp include/ConcreteComponentA.hpp src/ConcreteComponentB.cpp include/ConcreteComponentB.hpp src/ConcreteVisitor1.cpp include/ConcreteVisitor1.hpp src/ConcreteVisitor2.cpp include/ConcreteVisitor2.hpp)
