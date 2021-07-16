/*
    File: Element.cpp
    Author: David Villalobos
    Date: 2021-07-15
    Description: Implementation of base class to represent a property of a json
*/

#include"Element.h"

Element::Element(std::string name){
    this->name = name; 
}

Element::~Element(){ 

}

std::string Element::getName(){
    return name;
}

std::string Element::setName(){
    return name;
}