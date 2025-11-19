#include "virttual.h"

virttual::virttual()
{
    //ctor
}

virttual::~virttual()
{
    //dtor
}

virttual::virttual(const virttual& other)
{
    //copy ctor
}

virttual& virttual::operator=(const virttual& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
