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

class Plice
{
private:
    int handcuffs;
    Gun * pistol;   // 생성자에서 Gun 객체 생성, 참조
public:
    Plice(int bnum, int bcuff)
        : handcuffs(bcuff)
    {
        if(bnum>0)
            pistol= new Gun(bnum);
        else
            pistol=NULL;
    }
    void PutHandcuff()
    {
        cout<<"SNAP!"<<endl;
        handcuffs--;
    }
    void Shot()     // Gun 객체를 멤버변수를 통해 참조하는 구조이기 때문에 함수필요
    {
        if(pistol == NULL)
            cout<<"HUT BBANG!"<<endl;
        else
            pistol->shot();
    }
    ~Plice()
    {
        if(pistol != NULL)
            delete pistol;
    }
};

int main(void)
{
    Plice pman(5,3);
    pman.Shot();
    pman.PutHandcuff();

    Plice pman1(0,3);
    pman1.Shot();
    pman1.PutHandcuff();
    return 0;
}
