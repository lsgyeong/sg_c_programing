#include<iostream>
using namespace std;

class Point
{
public:
    int x;
    int y;
};

class Rectangle
{
public:
    Point upleft;
    Point lowRight;

public:
    void ShowRecInfo()
    {
        cout<<"좌상단:"<<'['<<upleft.x<<", ";
        cout<<upleft.y<<']'<<endl;
        cout<<"우하단:"<<'['<<lowRight.x<<", ";
        cout<<lowRight.y<<']'<<endl<<endl;
    }
};

int main(void)
{
    /* 멤버변수가 public으로 선언되면 구조체 변수 초기화하듯 초기화 가능 */
    Point pos1={-2,4};
    Point pos2={5,9};
    Rectangle rec={pos2, pos1};
    rec.ShowRecInfo();
    return 0;
}