#ifndef LINE_H
#define LINE_H

#include <iostream>
#include "Operations.hpp"

class Line
{
    public:
        const Point* start;
        const Point* end;
        double length;

        Line(const Point& p_start, const Point& p_end);

        std::string toString();

        Vector toVector();
};

#endif