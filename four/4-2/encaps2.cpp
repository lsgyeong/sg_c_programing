#include<iostream>
using namespace std;

class Sinivelcap
{
public:
    void Take() const
    {
        cout<<"콧물이 싹~ 납니다."<<endl;
    }
};

class Sneezecap
{
public:
    void Take() const
    {
        cout<<"재채기가 멎습니다"<<endl;
    }
};

class Snufflecap
{
public:
    void Take() const
    {
        cout<<"코가 뻥 뚫립니다."<<endl;
    }
};

class CONTAC600
{
private:
    Sinivelcap sin;
    Sneezecap sne;
    Snufflecap snu;

public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class Coldpatient
{
public:
    void TakeCONTAC600(const CONTAC600 &cap) const
    {
        cap.Take();
    }
};

int main(void)
{
    CONTAC600 cap;
    Coldpatient sufferer;
    sufferer.TakeCONTAC600(cap);
    return 0;
}