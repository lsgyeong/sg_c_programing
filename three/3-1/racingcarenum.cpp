#include<iostream>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

struct Car
{
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGuage;
    int curSpeed;
    
    void showCarState()
    {
        cout<<"소유자ID: "<<gamerID<<endl;
        cout<<"연료량: "<<fuelGuage<<endl;
        cout<<"현재속도: "<<curSpeed<<endl<<endl;
    }
    
    void Accel()
    {
        if(fuelGuage<=0)
            return;
        else
            fuelGuage -= CAR_CONST::FUEL_STEP;

        if((curSpeed+CAR_CONST::ACC_STEP)>=CAR_CONST::MAX_SPD)
        {
            curSpeed=CAR_CONST::MAX_SPD;
            return;
        }

        curSpeed+= CAR_CONST::ACC_STEP;
    }

    void Break()
    {
        if(curSpeed<CAR_CONST::BRK_STEP)
        {
            curSpeed = 0;
            return;
        }
        curSpeed -= CAR_CONST::BRK_STEP;
    }
};


int main(void)
{
    Car run99 = {"run99", 100, 0};  // 구조체 변수 선언 및 초기화
    run99.Accel();                  // 구조체변수.함수 호출
    run99.Accel();
    run99.showCarState();
    run99.Break();
    run99.showCarState();

    Car sped77 = {"sped77", 100, 0};
    sped77.Accel();
    sped77.Break();
    sped77.showCarState();
    return 0;
}