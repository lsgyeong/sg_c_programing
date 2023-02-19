#include <iostream>
#include"rectangleinit.h"
using namespace std;

// bool Rectangle::InitMembers(const Point &ul, const Point &lr)
// {
//     if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
//     {
//         cout<<"잘못된 위치정보 전달"<<endl;
//         return false;
//     }
//     upleft=ul;
//     lowRight=lr;
//     return true;
// }

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2): upleft(x1, y1), lowRight(x2,y2) 
{
}

void Rectangle::ShowRecInfo() const
{
    cout<<"좌상단: "<<'['<<upleft.GetX()<<", ";
    cout<<upleft.GetY()<<']'<<endl;
    cout<<"우하단: "<<'['<<lowRight.GetX()<<", ";
    cout<<lowRight.GetY()<<']'<<endl<<endl;
}