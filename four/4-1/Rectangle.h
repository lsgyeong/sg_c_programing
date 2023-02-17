#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "point.h"

class Rectangle
{
private:
    Point upleft;
    Point lowRight;

public:
    bool InitMembers(const Point &ul, const Point &lr);
    void ShowRecInfo() const;
};
#endif
