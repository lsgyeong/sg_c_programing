#include<iostream>
using namespace std;

class SoBase
{
private:
    int baseNum;
public:
    SoBase(int n) : baseNum(n)
    {
        cout<<"SoBase()"<<baseNum<<endl;
    }
    ~SoBase()
    {
        cout<<"~SoBase()"<<baseNum<<endl;
    }
};

class SoDerived : public SoBase // SoDerived : Sobase 클래스의 유도클래스
{
private:
    int derivNum;
public:

    SoDerived(int n) : SoBase(n), derivNum(n)
    {
        cout<<"SoDeriver()"<<derivNum<<endl;
    }
    ~SoDerived()
    {
        cout<<"~SoDeriver():"<<derivNum<<endl;
    }
};

int main(void)
{
    SoDerived drv1(15);
    SoDerived drv2(27);
    return 0;
}