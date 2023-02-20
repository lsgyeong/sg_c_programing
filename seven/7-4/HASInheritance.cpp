#include<iostream>
#include<cstring>
using namespace std;

class Gun
{
private:
    int bullet;
public:
    Gun(int bnum):bullet(bnum)
    {}
    void shot()
    {
        cout<<"BBANG!"<<endl;
        bullet--;
    }
};

class Plice : public Gun
{
private:
    int handcuffs;
public:
    Plice(int bnum, int bcuff)
        : Gun(bnum),handcuffs(bcuff)
    {}
    void PutHandcuff()
    {
        cout<<"SNAP!"<<endl;
        handcuffs--;
    }
};

int main(void)
{
    Plice pman(5,3);
    pman.shot();
    pman.PutHandcuff();
    return 0;

}
