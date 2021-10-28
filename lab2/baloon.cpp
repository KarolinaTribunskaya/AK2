#include <iostream>

#include "balloon.h"

Balloon::Balloon(float x, float y, float radius)
{
    this->x = x;
    this->y = y;
    this->radius = radius;
}

float Balloon::getRadius()
{
    return this->radius;
}

void Balloon::setRadius(float radius)
{
    this->radius = radius;
}

void Balloon::letTheBalloonScream()
{
    std::cout << "*Balloon screams helplessly.* (AAAAAAAAAAAAAA)" << std::endl;
}
